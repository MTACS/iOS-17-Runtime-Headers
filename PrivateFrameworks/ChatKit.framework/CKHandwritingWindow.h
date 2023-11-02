
@interface CKHandwritingWindow : UIWindow {
    bool  _eatOrientationEvents;
}

@property (nonatomic) bool eatOrientationEvents;

- (bool)_canAffectStatusBarAppearance;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(bool)arg1;
- (bool)eatOrientationEvents;
- (void)setEatOrientationEvents:(bool)arg1;

@end
