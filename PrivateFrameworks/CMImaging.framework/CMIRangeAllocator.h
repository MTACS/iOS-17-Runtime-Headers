
@interface CMIRangeAllocator : NSObject {
    unsigned int  _defaultAlignment;
    unsigned long long  _memSize;
    struct CMIRangeAllocatorList { 
        struct CMIRangeAllocatorListElement {} *elements; 
        unsigned int numElements; 
        unsigned long long capacity; 
        unsigned long long capacityIncrement; 
        unsigned long long defaultAlignmentMask; 
    }  _rangeAllocator;
    int  _strategyType;
}

- (int)allocateWithSize:(unsigned long long)arg1 alignment:(unsigned int)arg2 outputOffset:(unsigned long long*)arg3;
- (int)allocateWithSize:(unsigned long long)arg1 alignment:(unsigned int)arg2 outputOffset:(unsigned long long*)arg3 allocationHint:(int)arg4;
- (int)allocateWithSize:(unsigned long long)arg1 outputOffset:(unsigned long long*)arg2;
- (void)dealloc;
- (void)freeRangeWithOffset:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (unsigned int)getFragmentCount;
- (unsigned long long)getMaxFreeSize;
- (unsigned long long)getMaxFreeSizeWithAlignment:(unsigned int)arg1;
- (unsigned long long)getTotalFreeMemorySize;
- (id)init;
- (void)reset;
- (int)setupWithMemSize:(unsigned long long)arg1 alignment:(unsigned int)arg2 strategyType:(int)arg3;

@end
