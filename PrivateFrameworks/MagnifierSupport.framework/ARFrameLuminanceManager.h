
@interface ARFrameLuminanceManager : NSObject {
    unsigned long long  _currentFrameId;
    double  _lastComputedLuminance;
}

@property unsigned long long currentFrameId;
@property double lastComputedLuminance;

- (double)computeLuminanceFromPixelBuffer:(struct __CVBuffer { }*)arg1;
- (unsigned long long)currentFrameId;
- (id)init;
- (double)lastComputedLuminance;
- (void)setCurrentFrameId:(unsigned long long)arg1;
- (void)setLastComputedLuminance:(double)arg1;

@end
