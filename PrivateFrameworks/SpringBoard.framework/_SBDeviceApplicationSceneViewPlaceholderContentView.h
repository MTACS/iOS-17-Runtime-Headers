
@interface _SBDeviceApplicationSceneViewPlaceholderContentView : BSUIOrientationTransformWrapperView <SBScenePlaceholderContentView> {
    long long  _statusBarStyle;
}

@property (nonatomic) long long containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long statusBarStyle;
@property (readonly) Class superclass;

- (void)setStatusBarStyle:(long long)arg1;
- (long long)statusBarStyle;

@end
