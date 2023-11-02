
@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer {
    MTLCounterSampleBufferDescriptor * _descriptor;
    unsigned long long  _storageMode;
}

@property (nonatomic, readonly) MTLCounterSampleBufferDescriptor *descriptor;
@property (nonatomic, readonly) unsigned long long storageMode;

- (void)dealloc;
- (id)description;
- (id)descriptor;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithCounterSampleBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)storageMode;

@end
