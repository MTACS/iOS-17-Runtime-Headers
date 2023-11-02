
@interface PUWelcomeSettings : PXSettings <SBSRemoteAlertHandleObserver> {
    unsigned long long  _cloudPhotoWelcomeBehavior;
    unsigned long long  _whatsNewBehavior;
}

@property (nonatomic) unsigned long long cloudPhotoWelcomeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long whatsNewBehavior;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (unsigned long long)cloudPhotoWelcomeBehavior;
- (id)parentSettings;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)setCloudPhotoWelcomeBehavior:(unsigned long long)arg1;
- (void)setDefaultValues;
- (void)setWhatsNewBehavior:(unsigned long long)arg1;
- (unsigned long long)whatsNewBehavior;

@end
