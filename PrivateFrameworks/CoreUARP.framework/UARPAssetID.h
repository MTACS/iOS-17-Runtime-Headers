
@interface UARPAssetID : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _activeAccessoriesForStaging;
    NSDate * _assetReleaseDate;
    NSString * _assetVersion;
    NSNumber * _assetVersionNumber;
    bool  _deploymentAllowed;
    NSNumber * _deploymentDay;
    NSNumber * _deploymentPercent;
    NSArray * _deploymentRules;
    long long  _downloadStatus;
    NSNumber * _firmwareFileSize;
    NSString * _firmwareHash;
    bool  _isUrgentUpdate;
    NSURL * _localURL;
    NSObject<OS_os_log> * _log;
    long long  _releaseNotesAvailabilityStatus;
    long long  _releaseNotesDownloadStatus;
    NSNumber * _releaseNotesFileSize;
    NSURL * _releaseNotesLocalURL;
    NSString * _releaseNotesRemotePath;
    NSURL * _releaseNotesRemoteURL;
    NSString * _remoteBuildManifestPlistPath;
    NSString * _remotePath;
    NSURL * _remoteURL;
    bool  _reportProgressToDelegates;
    bool  _signatureValidationNeeded;
    UARPAssetTag * _tag;
    NSURL * _tatsuServerURL;
    long long  _type;
    long long  _updateAvailabilityStatus;
    long long  _validationStatus;
}

@property (readonly) NSDate *assetReleaseDate;
@property (readonly, copy) NSString *assetVersion;
@property (readonly) bool deploymentAllowed;
@property (readonly) NSArray *deploymentRules;
@property (readonly) long long downloadStatus;
@property (readonly) NSNumber *firmwareFileSize;
@property (readonly, copy) NSString *firmwareHash;
@property (readonly) bool isDynamicAsset;
@property (readonly) bool isUrgentUpdate;
@property (readonly, copy) NSString *localPath;
@property (readonly, copy) NSURL *localURL;
@property (getter=isMatterAsset, readonly) bool matterAsset;
@property (readonly) NSString *releaseDate;
@property (readonly) long long releaseNotesAvailabilityStatus;
@property (readonly) long long releaseNotesDownloadStatus;
@property (readonly) NSNumber *releaseNotesFileSize;
@property (readonly) NSString *releaseNotesLocalPath;
@property (readonly) NSURL *releaseNotesLocalURL;
@property (readonly) NSString *releaseNotesRemotePath;
@property (readonly) NSURL *releaseNotesRemoteURL;
@property (copy) NSString *remotePath;
@property (copy) NSURL *remoteURL;
@property (readonly, copy) HMFSoftwareVersion *softwareVersion;
@property (readonly, copy) UARPAssetTag *tag;
@property (readonly) NSURL *tatsuServerURL;
@property (readonly) long long type;
@property (readonly) long long updateAvailabilityStatus;

// Image: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createUARPDeploymentRules:(id)arg1;
- (bool)analyticsIsEqual:(id)arg1;
- (id)assetReleaseDate;
- (id)assetVersion;
- (id)assetVersionNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deploymentAllowed;
- (id)deploymentDay;
- (id)deploymentPercent;
- (id)deploymentRules;
- (id)description;
- (long long)downloadStatus;
- (void)dumpWithTabDepth:(unsigned long long)arg1 dumpString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareFileSize;
- (id)firmwareHash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationType:(long long)arg1 assetTag:(id)arg2 filePath:(id)arg3;
- (id)initWithLocationType:(long long)arg1 assetTag:(id)arg2 url:(id)arg3;
- (id)initWithLocationType:(long long)arg1 remotePath:(id)arg2;
- (id)initWithLocationType:(long long)arg1 remotePath:(id)arg2 releaseNotesRemotePath:(id)arg3;
- (id)initWithLocationType:(long long)arg1 remoteURL:(id)arg2;
- (id)initWithLocationType:(long long)arg1 remoteURL:(id)arg2 releaseNotesRemoteURL:(id)arg3;
- (bool)isDeploymentAllowed;
- (bool)isDynamicAsset;
- (bool)isEqual:(id)arg1;
- (bool)isStagingInProgressOnAccessoryID:(id)arg1;
- (bool)isUrgentUpdate;
- (id)localPath;
- (id)localURL;
- (void)processUARPDeploymentRules:(id)arg1;
- (id)rawDescription;
- (id)releaseDate;
- (long long)releaseNotesAvailabilityStatus;
- (long long)releaseNotesDownloadStatus;
- (id)releaseNotesFileSize;
- (id)releaseNotesLocalPath;
- (id)releaseNotesLocalURL;
- (id)releaseNotesRemotePath;
- (id)releaseNotesRemoteURL;
- (id)remoteBuildManifestPlistPath;
- (id)remotePath;
- (id)remoteURL;
- (bool)reportProgressToDelegates;
- (void)setAssetReleaseDate:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setAssetVersionNumber:(id)arg1;
- (void)setDeploymentAllowed:(bool)arg1;
- (void)setDeploymentDay:(id)arg1;
- (void)setDeploymentPercent:(id)arg1;
- (void)setDeploymentRules:(id)arg1;
- (void)setDownloadStatus:(long long)arg1;
- (void)setFirmwareFileSize:(id)arg1;
- (void)setFirmwareHash:(id)arg1;
- (void)setIsUrgentUpdate:(bool)arg1;
- (void)setLocalPath:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseNotesAvailabilityStatus:(long long)arg1;
- (void)setReleaseNotesDownloadStatus:(long long)arg1;
- (void)setReleaseNotesFileSize:(id)arg1;
- (void)setReleaseNotesLocalPath:(id)arg1;
- (void)setReleaseNotesLocalURL:(id)arg1;
- (void)setReleaseNotesRemotePath:(id)arg1;
- (void)setReleaseNotesRemoteURL:(id)arg1;
- (void)setRemoteBuildManifestPlistPath:(id)arg1;
- (void)setRemotePath:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setReportProgressToDelegates:(bool)arg1;
- (void)setSignatureValidationNeeded:(bool)arg1;
- (void)setTag:(id)arg1;
- (void)setTatsuServerURL:(id)arg1;
- (void)setUpdateAvailabilityStatus:(long long)arg1;
- (void)setValidationStatus:(long long)arg1;
- (bool)signatureValidationNeeded;
- (void)stagingCompleteOnAccessoryID:(id)arg1;
- (void)stagingStartedOnAccessoryID:(id)arg1;
- (id)tag;
- (id)tatsuServerURL;
- (long long)type;
- (const char *)typeString;
- (long long)updateAvailabilityStatus;
- (long long)validationStatus;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (bool)isMatterAsset;
- (id)softwareVersion;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (bool)isMatterAsset;
- (id)softwareVersion;

@end
