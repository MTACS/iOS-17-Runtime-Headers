
@interface SBSUIInCallSceneSettings : UIApplicationSceneSettings

@property (getter=isAttachedToWindowedAccessory, nonatomic, readonly) bool attachedToWindowedAccessory;
@property (getter=isBeingShownAboveCoverSheet, nonatomic, readonly) bool beingShownAboveCoverSheet;
@property (nonatomic, readonly) long long inCallPresentationMode;
@property (nonatomic, readonly) NSUUID *requestedPresentationConfigurationIdentifier;
@property (getter=isScreenSharingPresentation, nonatomic, readonly) bool screenSharingPresentation;
@property (nonatomic, readonly) bool systemControlsShouldPresentAsEmbedded;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowedAccessoryCutoutFrameInScreen;

- (long long)inCallPresentationMode;
- (bool)isAttachedToWindowedAccessory;
- (bool)isBeingShownAboveCoverSheet;
- (bool)isScreenSharingPresentation;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requestedPresentationConfigurationIdentifier;
- (bool)systemControlsShouldPresentAsEmbedded;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowedAccessoryCutoutFrameInScreen;

@end
