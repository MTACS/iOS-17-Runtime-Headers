
@interface UARPAccessory : NSObject {
    bool  _assetTransfersPaused;
    NSString * _availableFirmwareVersion;
    bool  _enableFirmwareDownloadOnDemand;
    NSString * _filepathCurrentAsset;
    unsigned int  _firmwareUpdateBytesTotal;
    unsigned int  _firmwareUpdateBytesTransferred;
    UARPAccessoryID * _id;
    NSMutableArray * _internalPendingAssets;
    NSArray * _partnerSerialNumbers;
    NSMutableSet * _pendingClientPropertyQueries;
    bool  _reachable;
    bool  _userInitiatedFirmwareApply;
    bool  _userInitiatedFirmwareStaging;
}

@property bool autoDownloadAllowed;
@property (copy) NSString *availableFirmwareVersion;
@property (readonly, copy) HMFSoftwareVersion *availableSoftwareVersion;
@property unsigned long long capability;
@property bool downloadOnCellularAllowed;
@property bool enableFirmwareDownloadOnDemand;
@property (copy) NSString *filepathCurrentAsset;
@property unsigned int firmwareUpdateBytesTotal;
@property unsigned int firmwareUpdateBytesTransferred;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *friendlyName;
@property (readonly) NSString *hwFusingType;
@property (readonly) NSString *hwRevision;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *modelName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *serialNumber;
@property (copy) NSString *stagedFirmwareVersion;
@property (readonly) bool suppressAutomaticDynamicAssets;
@property long long transport;
@property (readonly) unsigned long long uarpVersion;
@property bool userInitiatedFirmwareApply;
@property bool userInitiatedFirmwareStaging;
@property NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP

+ (id)logger;

- (void).cxx_destruct;
- (void)addPendingAsset:(id)arg1;
- (void)addPendingClientPropertyQuery:(unsigned long long)arg1;
- (bool)assetTransfersPaused;
- (bool)autoDownloadAllowed;
- (id)availableFirmwareVersion;
- (id)bsdNotifications;
- (unsigned long long)capability;
- (bool)clientQueryPendingForProperty:(unsigned long long)arg1;
- (id)description;
- (bool)downloadOnCellularAllowed;
- (bool)enableFirmwareDownloadOnDemand;
- (id)filepathCurrentAsset;
- (unsigned int)firmwareUpdateBytesTotal;
- (unsigned int)firmwareUpdateBytesTransferred;
- (id)firmwareVersion;
- (id)friendlyName;
- (id)getID;
- (id)hwFusingType;
- (id)hwRevision;
- (id)initWithHardwareID:(id)arg1 uuid:(id)arg2;
- (id)initWithID:(id)arg1;
- (id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4;
- (id)initWithManufacturer:(id)arg1 modelName:(id)arg2 serialNumber:(id)arg3 firmwareVersion:(id)arg4 productGroup:(id)arg5 productNumber:(id)arg6;
- (id)initWithModelNumber:(id)arg1;
- (id)initWithProductGroup:(id)arg1 productNumber:(id)arg2 uuid:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)manufacturer;
- (id)modelName;
- (id)modelNumber;
- (id)partnerSerialNumbers;
- (id)pendingAssets;
- (id)productGroup;
- (id)productNumber;
- (bool)reachable;
- (void)removePendingAsset:(id)arg1;
- (void)removePendingClientPropertyQuery:(unsigned long long)arg1;
- (id)serialNumber;
- (id)serviceBsdNotifications;
- (void)setAssetTransfersPaused:(bool)arg1;
- (void)setAutoDownloadAllowed:(bool)arg1;
- (void)setAvailableFirmwareVersion:(id)arg1;
- (void)setCapability:(unsigned long long)arg1;
- (void)setDownloadOnCellularAllowed:(bool)arg1;
- (void)setEnableFirmwareDownloadOnDemand:(bool)arg1;
- (void)setFilepathCurrentAsset:(id)arg1;
- (void)setFirmwareUpdateBytesTotal:(unsigned int)arg1;
- (void)setFirmwareUpdateBytesTransferred:(unsigned int)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setFriendlyName:(id)arg1;
- (void)setHwFusingType:(id)arg1;
- (void)setHwRevision:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setPartnerSerialNumbers:(id)arg1;
- (void)setProductGroup:(id)arg1;
- (void)setProductNumber:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setStagedFirmwareVersion:(id)arg1;
- (void)setSuppressAutomaticDynamicAssets:(bool)arg1;
- (void)setTransport:(long long)arg1;
- (void)setUarpVersion:(unsigned long long)arg1;
- (void)setUserInitiatedFirmwareApply:(bool)arg1;
- (void)setUserInitiatedFirmwareStaging:(bool)arg1;
- (void)setUuid:(id)arg1;
- (id)stagedFirmwareVersion;
- (bool)suppressAutomaticDynamicAssets;
- (long long)transport;
- (unsigned long long)uarpVersion;
- (bool)userInitiatedFirmwareApply;
- (bool)userInitiatedFirmwareStaging;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)availableSoftwareVersion;
- (id)initWithHMDHAPAccessory:(id)arg1;
- (id)redactedDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)availableSoftwareVersion;
- (id)initWithHMDHAPAccessory:(id)arg1;
- (id)redactedDescription;

@end
