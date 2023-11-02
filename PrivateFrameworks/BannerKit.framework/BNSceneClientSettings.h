
@interface BNSceneClientSettings : UIApplicationSceneClientSettings <BSSettingDescriptionProvider>

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bannerContentOutsets;
@property (getter=isClippingEnabled, nonatomic, readonly) bool clippingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDraggingDismissalEnabled, nonatomic, readonly) bool draggingDismissalEnabled;
@property (getter=isDraggingInteractionEnabled, nonatomic, readonly) bool draggingInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (getter=isPanGestureProxySupported, nonatomic, readonly) bool panGestureProxySupported;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (readonly) Class superclass;
@property (getter=isTouchOutsideDismissalEnabled, nonatomic, readonly) bool touchOutsideDismissalEnabled;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bannerContentOutsets;
- (bool)isClippingEnabled;
- (bool)isDraggingDismissalEnabled;
- (bool)isDraggingInteractionEnabled;
- (bool)isPanGestureProxySupported;
- (bool)isTouchOutsideDismissalEnabled;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
