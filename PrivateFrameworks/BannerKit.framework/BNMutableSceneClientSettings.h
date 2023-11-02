
@interface BNMutableSceneClientSettings : UIMutableApplicationSceneClientSettings <BSSettingDescriptionProvider>

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bannerContentOutsets;
@property (getter=isClippingEnabled, nonatomic) bool clippingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isPanGestureProxySupported, nonatomic) bool panGestureProxySupported;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic) bool touchOutsideDismissalEnabled;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isClippingEnabled;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isPanGestureProxySupported;
- (bool)isTouchOutsideDismissalEnabled;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setBannerContentOutsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setClippingEnabled:(bool)arg1;
- (void)setDraggingDismissalEnabled:(bool)arg1;
- (void)setDraggingInteractionEnabled:(bool)arg1;
- (void)setPanGestureProxySupported:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTouchOutsideDismissalEnabled:(bool)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
