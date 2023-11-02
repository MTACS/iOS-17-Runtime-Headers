
@interface MTLToolsCounterSampleBuffer : MTLToolsObject <MTLCounterSampleBuffer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long sampleCount;
@property (readonly) Class superclass;

- (id)label;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)sampleCount;

@end
