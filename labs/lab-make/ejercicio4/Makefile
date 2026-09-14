# Nombre del ejecutable final
PROGRAMA := programa

# Compilador y flags
CC     := gcc
CFLAGS := -Wall

# Definición de los archivos fuente
SRCS := main.c operaciones.c

# Objetos generados a partir de los fuentes
OBJS := $(SRCS:.c=.o)

# Regla principal
all: $(PROGRAMA)

# Regla para linkear los objetos y generar el ejecutable
$(PROGRAMA): $(OBJS)
	$(CC) $^ -o $(PROGRAMA)

# Regla de patrón para compilar cada .c en su .o
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar archivos generados
clean:
	rm -f $(PROGRAMA) $(OBJS)

.PHONY: all clean