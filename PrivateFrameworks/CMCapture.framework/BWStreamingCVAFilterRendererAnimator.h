
@interface BWStreamingCVAFilterRendererAnimator : NSObject {
    struct { 
        float simulatedAperture; 
    }  _currentFrame;
    int  _mostRecentEffectStatus;
    bool  _overCaptureEnabled;
    BWRamp * _simulatedApertureRamp;
}

@property (getter=isDepthAvailable, nonatomic, readonly) bool depthAvailable;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)initWithEffectStatus:(int)arg1 overCaptureEnabled:(bool)arg2;
- (bool)isDepthAvailable;
- (struct { float x1; }*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 clientSuppliedSimulatedAperture:(float)arg3;

@end
