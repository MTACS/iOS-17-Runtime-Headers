
@interface CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings : CEMPayloadBase {
    NSNumber * _statusAutomaticAppInstallationEnabled;
    NSNumber * _statusAutomaticCheckEnabled;
    NSNumber * _statusAutomaticOSInstallationEnabled;
    NSNumber * _statusAutomaticSecurityUpdatesEnabled;
    NSNumber * _statusBackgroundDownloadEnabled;
    NSString * _statusCatalogURL;
    NSNumber * _statusIsDefaultCatalog;
    NSNumber * _statusPerformPeriodicCheck;
    NSDate * _statusPreviousScanDate;
    NSString * _statusPreviousScanResult;
}

@property (nonatomic, copy) NSNumber *statusAutomaticAppInstallationEnabled;
@property (nonatomic, copy) NSNumber *statusAutomaticCheckEnabled;
@property (nonatomic, copy) NSNumber *statusAutomaticOSInstallationEnabled;
@property (nonatomic, copy) NSNumber *statusAutomaticSecurityUpdatesEnabled;
@property (nonatomic, copy) NSNumber *statusBackgroundDownloadEnabled;
@property (nonatomic, copy) NSString *statusCatalogURL;
@property (nonatomic, copy) NSNumber *statusIsDefaultCatalog;
@property (nonatomic, copy) NSNumber *statusPerformPeriodicCheck;
@property (nonatomic, copy) NSDate *statusPreviousScanDate;
@property (nonatomic, copy) NSString *statusPreviousScanResult;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithCatalogURL:(id)arg1 withIsDefaultCatalog:(id)arg2 withPreviousScanDate:(id)arg3 withPreviousScanResult:(id)arg4 withPerformPeriodicCheck:(id)arg5 withAutomaticCheckEnabled:(id)arg6 withBackgroundDownloadEnabled:(id)arg7 withAutomaticAppInstallationEnabled:(id)arg8 withAutomaticOSInstallationEnabled:(id)arg9 withAutomaticSecurityUpdatesEnabled:(id)arg10;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusAutomaticAppInstallationEnabled:(id)arg1;
- (void)setStatusAutomaticCheckEnabled:(id)arg1;
- (void)setStatusAutomaticOSInstallationEnabled:(id)arg1;
- (void)setStatusAutomaticSecurityUpdatesEnabled:(id)arg1;
- (void)setStatusBackgroundDownloadEnabled:(id)arg1;
- (void)setStatusCatalogURL:(id)arg1;
- (void)setStatusIsDefaultCatalog:(id)arg1;
- (void)setStatusPerformPeriodicCheck:(id)arg1;
- (void)setStatusPreviousScanDate:(id)arg1;
- (void)setStatusPreviousScanResult:(id)arg1;
- (id)statusAutomaticAppInstallationEnabled;
- (id)statusAutomaticCheckEnabled;
- (id)statusAutomaticOSInstallationEnabled;
- (id)statusAutomaticSecurityUpdatesEnabled;
- (id)statusBackgroundDownloadEnabled;
- (id)statusCatalogURL;
- (id)statusIsDefaultCatalog;
- (id)statusPerformPeriodicCheck;
- (id)statusPreviousScanDate;
- (id)statusPreviousScanResult;

@end
