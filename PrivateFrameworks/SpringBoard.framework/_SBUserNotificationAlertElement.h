
@interface _SBUserNotificationAlertElement : SBAlertProvidedContentElement <SBSystemApertureContextProviding> {
    <SAAlertHosting> * _alertHost;
    UIColor * _keyColor;
    bool  _preventsAutomaticDismissal;
}

@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *keyColor;
@property (nonatomic) bool preventsAutomaticDismissal;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertHost;
- (id)keyColor;
- (bool)preventsAutomaticDismissal;
- (void)setAlertHost:(id)arg1;
- (void)setKeyColor:(id)arg1;
- (void)setPreventsAutomaticDismissal:(bool)arg1;

@end
