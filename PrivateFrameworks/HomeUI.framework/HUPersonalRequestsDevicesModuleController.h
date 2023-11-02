
@interface HUPersonalRequestsDevicesModuleController : HUItemModuleController <HUSwitchCellDelegate, UITextViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUPersonalRequestsDevicesItemModule *module;
@property (readonly) Class superclass;

- (bool)_isCurrentDeviceCandidateForLocationDevice;
- (id)_preflightEnablingPersonalRequests;
- (void)_presentAlert:(id)arg1;
- (void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)arg1 cell:(id)arg2 didTurnOn:(bool)arg3 isOutdatedOS:(bool)arg4 unsupportedAccessoryLanguage:(bool)arg5 hasMismatchedLanguages:(bool)arg6;
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1;
- (id)_promptToChangeLocationDeviceIfNecessary;
- (id)_promptToEnableSiriIfNecessary;
- (void)_togglePersonalRequestStateForItem:(id)arg1;
- (void)_turnOnPersonalRequestForItem:(id)arg1 cell:(id)arg2 didTurnOn:(bool)arg3;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 host:(id)arg2;
- (id)setPersonalRequestsDevices:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)turnOnPersonalRequestsForAllMultiUserCapableDevices;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end
