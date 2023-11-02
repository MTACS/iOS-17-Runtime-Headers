
@interface CEMApplicationListInstalledApplicationsCommand_StatusInstalledApplicationListItem : CEMPayloadBase {
    NSNumber * _statusAdHocCodeSigned;
    NSNumber * _statusAppStoreVendable;
    NSNumber * _statusBetaApp;
    NSString * _statusBundleIdentifier;
    NSString * _statusBundleSize;
    NSNumber * _statusDeviceBasedVPP;
    NSNumber * _statusDownloadCancelled;
    NSNumber * _statusDownloadFailed;
    NSNumber * _statusDownloadPaused;
    NSNumber * _statusDownloadWaiting;
    NSString * _statusDynamicSize;
    NSString * _statusExternalVersionIdentifier;
    NSNumber * _statusHasUpdateAvailable;
    NSNumber * _statusInstalling;
    NSNumber * _statusIsValidated;
    NSString * _statusName;
    NSString * _statusShortVersion;
    NSString * _statusVersion;
}

@property (nonatomic, copy) NSNumber *statusAdHocCodeSigned;
@property (nonatomic, copy) NSNumber *statusAppStoreVendable;
@property (nonatomic, copy) NSNumber *statusBetaApp;
@property (nonatomic, copy) NSString *statusBundleIdentifier;
@property (nonatomic, copy) NSString *statusBundleSize;
@property (nonatomic, copy) NSNumber *statusDeviceBasedVPP;
@property (nonatomic, copy) NSNumber *statusDownloadCancelled;
@property (nonatomic, copy) NSNumber *statusDownloadFailed;
@property (nonatomic, copy) NSNumber *statusDownloadPaused;
@property (nonatomic, copy) NSNumber *statusDownloadWaiting;
@property (nonatomic, copy) NSString *statusDynamicSize;
@property (nonatomic, copy) NSString *statusExternalVersionIdentifier;
@property (nonatomic, copy) NSNumber *statusHasUpdateAvailable;
@property (nonatomic, copy) NSNumber *statusInstalling;
@property (nonatomic, copy) NSNumber *statusIsValidated;
@property (nonatomic, copy) NSString *statusName;
@property (nonatomic, copy) NSString *statusShortVersion;
@property (nonatomic, copy) NSString *statusVersion;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withAppStoreVendable:(id)arg6 withDeviceBasedVPP:(id)arg7 withBetaApp:(id)arg8 withAdHocCodeSigned:(id)arg9 withHasUpdateAvailable:(id)arg10;
+ (id)buildWithBundleIdentifier:(id)arg1 withExternalVersionIdentifier:(id)arg2 withVersion:(id)arg3 withShortVersion:(id)arg4 withName:(id)arg5 withBundleSize:(id)arg6 withDynamicSize:(id)arg7 withIsValidated:(id)arg8 withInstalling:(id)arg9 withAppStoreVendable:(id)arg10 withDeviceBasedVPP:(id)arg11 withBetaApp:(id)arg12 withAdHocCodeSigned:(id)arg13 withHasUpdateAvailable:(id)arg14 withDownloadFailed:(id)arg15 withDownloadWaiting:(id)arg16 withDownloadPaused:(id)arg17 withDownloadCancelled:(id)arg18;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusAdHocCodeSigned:(id)arg1;
- (void)setStatusAppStoreVendable:(id)arg1;
- (void)setStatusBetaApp:(id)arg1;
- (void)setStatusBundleIdentifier:(id)arg1;
- (void)setStatusBundleSize:(id)arg1;
- (void)setStatusDeviceBasedVPP:(id)arg1;
- (void)setStatusDownloadCancelled:(id)arg1;
- (void)setStatusDownloadFailed:(id)arg1;
- (void)setStatusDownloadPaused:(id)arg1;
- (void)setStatusDownloadWaiting:(id)arg1;
- (void)setStatusDynamicSize:(id)arg1;
- (void)setStatusExternalVersionIdentifier:(id)arg1;
- (void)setStatusHasUpdateAvailable:(id)arg1;
- (void)setStatusInstalling:(id)arg1;
- (void)setStatusIsValidated:(id)arg1;
- (void)setStatusName:(id)arg1;
- (void)setStatusShortVersion:(id)arg1;
- (void)setStatusVersion:(id)arg1;
- (id)statusAdHocCodeSigned;
- (id)statusAppStoreVendable;
- (id)statusBetaApp;
- (id)statusBundleIdentifier;
- (id)statusBundleSize;
- (id)statusDeviceBasedVPP;
- (id)statusDownloadCancelled;
- (id)statusDownloadFailed;
- (id)statusDownloadPaused;
- (id)statusDownloadWaiting;
- (id)statusDynamicSize;
- (id)statusExternalVersionIdentifier;
- (id)statusHasUpdateAvailable;
- (id)statusInstalling;
- (id)statusIsValidated;
- (id)statusName;
- (id)statusShortVersion;
- (id)statusVersion;

@end
