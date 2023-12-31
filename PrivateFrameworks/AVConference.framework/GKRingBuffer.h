
@interface GKRingBuffer : NSObject {
    unsigned int  bytesPerFrame;
    unsigned int  capacity;
    unsigned int  endTime;
    void * ringBufRef;
}

- (void)dealloc;
- (int)fetch:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;
- (void)increaseCapacity:(unsigned int)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1 bytesPerFrame:(unsigned int)arg2;
- (int)needsNewNumSamples:(unsigned int)arg1 timestamp:(unsigned int)arg2;
- (bool)store:(char *)arg1 numSamples:(unsigned int)arg2 timestamp:(unsigned int)arg3;

@end
