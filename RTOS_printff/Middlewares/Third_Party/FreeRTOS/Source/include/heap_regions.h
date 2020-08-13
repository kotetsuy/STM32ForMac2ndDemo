__attribute__((section("._user_heap_stack"))) static uint8_t ucHeap[ 0x3c00 ];

#define heap_regions_init(xHeapRegions) \
xHeapRegions[0].pucStartAddress = ucHeap; \
xHeapRegions[0].xSizeInBytes =  sizeof(ucHeap); \
xHeapRegions[1].pucStartAddress = NULL; \
xHeapRegions[1].xSizeInBytes =  0;

#define NUM_HEAP_REGIONS 1

