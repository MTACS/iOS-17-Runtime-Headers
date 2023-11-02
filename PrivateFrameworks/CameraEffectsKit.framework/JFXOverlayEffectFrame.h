
@interface JFXOverlayEffectFrame : JFXTextEffectFrame {
    struct CGPoint { 
        double x; 
        double y; 
    }  _overlayCenter;
    long long  _trackingType;
}

@property (nonatomic, readonly) bool isTrackedButTrackingUnavailable;
@property (nonatomic) struct CGPoint { double x1; double x2; } overlayCenter;
@property (nonatomic) long long trackingType;
@property (nonatomic, retain) JFXOverlayEffectTransforms *transforms;

+ (id)frameWithEffect:(id)arg1 relativeToSize:(struct CGSize { double x1; double x2; })arg2 origin:(int)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forcePosterFrame:(bool)arg5 includeDropShadow:(bool)arg6 includeTextFrames:(bool)arg7;

- (id)description;
- (id)initWithEffect:(id)arg1 relativeToSize:(struct CGSize { double x1; double x2; })arg2 origin:(int)arg3 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 forcePosterFrame:(bool)arg5 includeDropShadow:(bool)arg6 includeTextFrames:(bool)arg7;
- (bool)isTrackedButTrackingUnavailable;
- (struct CGPoint { double x1; double x2; })overlayCenter;
- (void)setOverlayCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrackingType:(long long)arg1;
- (long long)trackingType;

@end
