
@interface SBSUIMutableInCallSceneSettings : UIMutableApplicationSceneSettings {
    bool  _beingShownAboveCoverSheet;
    long long  _inCallPresentationMode;
    NSUUID * _requestedPresentationConfigurationIdentifier;
    bool  _screenSharingPresentation;
}

@property (getter=isAttachedToWindowedAccessory, nonatomic) bool attachedToWindowedAccessory;
@property (getter=isBeingShownAboveCoverSheet, nonatomic) bool beingShownAboveCoverSheet;
@property (nonatomic) long long inCallPresentationMode;
@property (nonatomic, retain) NSUUID *requestedPresentationConfigurationIdentifier;
@property (getter=isScreenSharingPresentation, nonatomic) bool screenSharingPresentation;
@property (nonatomic) bool systemControlsShouldPresentAsEmbedded;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } windowedAccessoryCutoutFrameInScreen;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)inCallPresentationMode;
- (bool)isAttachedToWindowedAccessory;
- (bool)isBeingShownAboveCoverSheet;
- (bool)isScreenSharingPresentation;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)requestedPresentationConfigurationIdentifier;
- (void)setAttachedToWindowedAccessory:(bool)arg1;
- (void)setBeingShownAboveCoverSheet:(bool)arg1;
- (void)setDeactivationReasons:(unsigned long long)arg1;
- (void)setInCallPresentationMode:(long long)arg1;
- (void)setRequestedPresentationConfigurationIdentifier:(id)arg1;
- (void)setScreenSharingPresentation:(bool)arg1;
- (void)setSystemControlsShouldPresentAsEmbedded:(bool)arg1;
- (void)setWindowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)systemControlsShouldPresentAsEmbedded;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })windowedAccessoryCutoutFrameInScreen;

@end
