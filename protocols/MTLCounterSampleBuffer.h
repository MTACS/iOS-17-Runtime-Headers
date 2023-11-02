
@protocol MTLCounterSampleBuffer <NSObject>

@required

- (<MTLDevice> *)device;
- (NSString *)label;
- (NSData *)resolveCounterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)sampleCount;

@end
