
@protocol CAMBurstRequest <NSObject>

@required

- (NSString *)burstIdentifier;
- (CAMCaptureRequest *)captureRequest;
- (unsigned long long)maximumBurstLength;

@end
