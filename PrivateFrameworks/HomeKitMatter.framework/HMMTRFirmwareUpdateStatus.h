
@interface HMMTRFirmwareUpdateStatus : NSObject {
    HMMTRAccessoryServer * _accessoryServer;
    NSNumber * _downloadedFirmwareVersionNumber;
    HAPMatterFirmwareUpdateStatus * _localFirmwareUpdateStatus;
}

@property (nonatomic, readonly) HMMTRAccessoryServer *accessoryServer;
@property (nonatomic, retain) NSNumber *downloadedFirmwareVersionNumber;
@property (nonatomic, retain) HAPMatterFirmwareUpdateStatus *localFirmwareUpdateStatus;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_updateStateAsString:(unsigned char)arg1;
- (id)accessoryServer;
- (void)checkCurrentFirmwareVersionNumber:(id)arg1;
- (id)downloadedFirmwareVersionNumber;
- (void)handleOTARequestorAttributeReport:(id)arg1;
- (id)initWithFirmwareUpdateStatus:(id)arg1 accessoryServer:(id)arg2;
- (id)localFirmwareUpdateStatus;
- (id)readForHAPFirmwareUpdateReadinessCharacteristic:(id)arg1;
- (id)readForHAPFirmwareUpdateStatusCharacteristic:(id)arg1;
- (id)readForMatterFirmwareUpdateStatusCharacteristic:(id)arg1;
- (void)setDownloadedFirmwareVersionNumber:(id)arg1;
- (void)setLocalFirmwareUpdateStatus:(id)arg1;
- (void)updateDownloadedFirmwareVersionNumber:(id)arg1;
- (void)updateFirmwareUpdateStatus:(long long)arg1;

@end
