
@interface BWMotionSampleRingBuffer : NSObject <NSFastEnumeration> {
    int  _maxCount;
    double  _maxDuration;
    BWRingBuffer * _ringBuffer;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;

@end