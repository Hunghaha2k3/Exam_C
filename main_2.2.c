#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char room_name[50];
    int room_no;
} ClassRoom;

int main()
{
    ClassRoom ClassRooms[10];
    fgets(ClassRooms->room_name, sizeof(ClassRooms), stdin);
}