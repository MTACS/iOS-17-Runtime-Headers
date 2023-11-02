
@interface DNDSPairedDevice : NSObject <NSCopying> {
    unsigned long long  _assertionSyncProtocolVersion;
    unsigned long long  _configurationSyncProtocolVersion;
    unsigned long long  _deviceClass;
    NSString * _deviceIdentifier;
    NSString * _deviceName;
    bool  _iCloudEnabled;
    bool  _iOS14EraOS;
    NSString * _osBuild;
    NSString * _pairingDataStore;
    NSUUID * _pairingIdentifier;
    bool  _supportsSilenceLists;
    unsigned long long  _syncServiceType;
}

@property (nonatomic, readonly) unsigned long long assertionSyncProtocolVersion;
@property (nonatomic, readonly) unsigned long long configurationSyncProtocolVersion;
@property (nonatomic, readonly) unsigned long long deviceClass;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *deviceName;
@property (getter=isICloudEnabled, nonatomic) bool iCloudEnabled;
@property (getter=isIOS14EraOS, nonatomic, readonly) bool iOS14EraOS;
@property (nonatomic, copy) NSString *osBuild;
@property (nonatomic, readonly, copy) NSString *pairingDataStore;
@property (nonatomic, readonly, copy) NSUUID *pairingIdentifier;
@property (nonatomic, readonly) bool supportsKettle;
@property (nonatomic, readonly) bool supportsSilenceLists;
@property (nonatomic, readonly) unsigned long long syncServiceType;

- (void).cxx_destruct;
- (unsigned long long)assertionSyncProtocolVersion;
- (unsigned long long)configurationSyncProtocolVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceClass;
- (id)deviceIdentifier;
- (id)deviceName;
- (unsigned long long)hash;
- (id)initWithCloudDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 assertionSyncProtocolVersion:(unsigned long long)arg3 configurationSyncProtocolVersion:(unsigned long long)arg4 supportsSilenceLists:(bool)arg5;
- (id)initWithLocalDeviceIdentifier:(id)arg1 deviceClass:(unsigned long long)arg2 assertionSyncProtocolVersion:(unsigned long long)arg3 configurationSyncProtocolVersion:(unsigned long long)arg4 iOS14EraOS:(bool)arg5 supportsSilenceLists:(bool)arg6 pairingIdentifier:(id)arg7 pairingDataStore:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isICloudEnabled;
- (bool)isIOS14EraOS;
- (id)osBuild;
- (id)pairingDataStore;
- (id)pairingIdentifier;
- (void)setDeviceName:(id)arg1;
- (void)setICloudEnabled:(bool)arg1;
- (void)setOsBuild:(id)arg1;
- (bool)supportsKettle;
- (bool)supportsSilenceLists;
- (unsigned long long)syncServiceType;

@end
