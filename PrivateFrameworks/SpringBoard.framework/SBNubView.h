
@interface SBNubView : SBFTouchPassThroughView <SBDeviceApplicationSceneHandleObserver> {
    UIApplicationSceneClientSettingsDiffInspector * _applicationSceneClientSettingsDiffInspector;
    SBDeviceApplicationSceneHandle * _deviceApplicationSceneHandle;
    bool  _highlighted;
    UIView * _nubView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBDeviceApplicationSceneHandle *deviceApplicationSceneHandle;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (readonly) Class superclass;

+ (double)contentHeight;
+ (double)height;
+ (double)hitTestPadding;
+ (double)hitTestWidth;

- (void).cxx_destruct;
- (void)_updateNubViewBackgroundColor;
- (void)_updateNubViewOverrideUserInterfaceStyleAndBackgroundColor;
- (id)contentView;
- (void)dealloc;
- (id)deviceApplicationSceneHandle;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceApplicationSceneHandle:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)setHighlighted:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
