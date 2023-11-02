
@interface BCSURLAction : BCSAction {
    NSArray * _appLinks;
    NSURL * _appStoreSearchURLForUnsupportedScheme;
    CTCellularPlanManagerCameraScanAction * _cellularPlanAction;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _deviceDataIsUnavailable;
    bool  _hasPreferredAppLink;
    NSArray * _upiApplicationRecords;
    LSApplicationRecord * _userVisibleAppRecord;
}

@property (nonatomic, readonly) unsigned long long appLinkCount;
@property (nonatomic, readonly) bool hasPreferredAppLink;
@property (nonatomic, readonly) bool mustOpenAppLinkInApp;
@property (nonatomic, readonly) LSApplicationRecord *targetApplication;

- (void).cxx_destruct;
- (id)_actionDescriptionForAppClip;
- (id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(bool)arg3;
- (id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1;
- (id)_actionPickerItemsForAppClip;
- (id)_actionPickerItemsForLockScreenVisibleApps;
- (id)_actionPickerItemsForUnlockedAppLinks;
- (id)_additionalActionPickerItems;
- (id)_appclipLaunchReason;
- (id)_commonActionPickerItemsForURL;
- (bool)_hasCellularPlanAction;
- (bool)_isCodeFromQRScanner;
- (bool)_isVisualCode;
- (id)_menuElementForActionPicker:(id)arg1;
- (id)_passkeyAssertionActionDescription;
- (id)_passkeyRegistrationActionDescription;
- (void)_queryApplicationRecordForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_resolveAppClipForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_shouldBlockHandlingURL:(id)arg1;
- (bool)_shouldOpenInAppForAppLink:(id)arg1;
- (bool)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(id /* block */)arg1;
- (bool)_willOpenInSafari;
- (id)actionIcon;
- (id)actionPickerItems;
- (unsigned long long)appLinkCount;
- (id)appLinks;
- (id)contentPreviewString;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (bool)hasPreferredAppLink;
- (bool)hasSensitiveURL;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (bool)isAMSAction;
- (bool)isAirplayPairingAction;
- (bool)isPasskeyAction;
- (bool)isPasskeyAssertionAction;
- (bool)isPasskeyRegistrationAction;
- (id)localizedDefaultActionDescription;
- (id)localizedDefaultActionTitle;
- (id)menuElements;
- (unsigned long long)menuElementsCount;
- (bool)mustOpenAppLinkInApp;
- (void)performAction;
- (void)performActionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)performDefaultAction;
- (void)performDefaultActionWithFBOptions:(id)arg1;
- (id)preferredBundleID;
- (id)shortDescription;
- (bool)shouldRequireUserToPickTargetApp;
- (id)targetApplication;
- (id)url;
- (id)urlThatCanBeOpened;

@end
