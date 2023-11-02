
@protocol AXMActiveSoundOutputActionHandleProvider <NSObject>

@required

- (float)pitch;
- (float)rate;
- (void)setPitch:(float)arg1;
- (void)setQuantizedRate:(long long)arg1;
- (void)setRate:(float)arg1;
- (void)stop;

@end
