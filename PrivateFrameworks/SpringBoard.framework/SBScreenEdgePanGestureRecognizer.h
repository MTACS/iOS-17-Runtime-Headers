
@interface SBScreenEdgePanGestureRecognizer : UIScreenEdgePanGestureRecognizer {
    double  _grabberActiveZoneWidth;
}

@property (nonatomic) <SBSystemGestureRecognizerDelegate> *delegate;
@property (nonatomic) double grabberActiveZoneWidth;

- (long long)_touchInterfaceOrientation;
- (double)grabberActiveZoneWidth;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (bool)isLocationWithinGrabberActiveZone;
- (void)sb_commonInitScreenEdgePanGestureRecognizer;
- (void)setGrabberActiveZoneWidth:(double)arg1;

@end
