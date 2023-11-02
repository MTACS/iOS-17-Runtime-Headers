
@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController <HUSafetyAndSecuritySettingsModuleControllerDelegate> {
    HUAnnounceSettingsItemModuleController * _announceSettingsModuleController;
    HUEnergySettingsItemModuleController * _energySettingsModuleController;
    HUFaceRecognitionItemModuleController * _faceRecognitionModuleController;
    HMHome * _home;
    HUUserNotificationTopicServiceListModuleController * _moduleController;
    HUSafetyAndSecuritySettingsItemModuleController * _safetyAndSecuritySettingsItemModuleController;
    HFUserNotificationServiceTopic * _topic;
}

@property (nonatomic, retain) HUAnnounceSettingsItemModuleController *announceSettingsModuleController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUEnergySettingsItemModuleController *energySettingsModuleController;
@property (nonatomic, retain) HUFaceRecognitionItemModuleController *faceRecognitionModuleController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUUserNotificationTopicServiceListModuleController *moduleController;
@property (nonatomic, retain) HUSafetyAndSecuritySettingsItemModuleController *safetyAndSecuritySettingsItemModuleController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (bool)_shouldShowFaceRecognition;
- (id)announceSettingsModuleController;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)buildSwiftItemModuleControllerForModule:(id)arg1;
- (void)dismissToHomeSettings;
- (id)energySettingsModuleController;
- (id)faceRecognitionModuleController;
- (id)home;
- (id)initWithHome:(id)arg1 topic:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)moduleController;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(bool)arg2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(bool)arg3;
- (void)presentHH2OnboardingForHome:(id)arg1 withDevices:(id)arg2;
- (id)safetyAndSecuritySettingsItemModuleController;
- (void)setAnnounceSettingsModuleController:(id)arg1;
- (void)setEnergySettingsModuleController:(id)arg1;
- (void)setFaceRecognitionModuleController:(id)arg1;
- (void)setModuleController:(id)arg1;
- (void)setSafetyAndSecuritySettingsItemModuleController:(id)arg1;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(bool)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)topic;

@end
