
@interface MAAutoAssetNotifications : NSObject <NSSecureCoding> {
    bool  _assetPurged;
    bool  _checkForNewerFailure;
    bool  _contentAvailableForUse;
    bool  _contentVersionRevoked;
    bool  _downloadAbandoned;
    bool  _downloadPending;
    bool  _downloadProgress;
    bool  _filesystemSpaceCritical;
    bool  _lockUsageCheck;
    bool  _newerVersionDiscovered;
}

@property (nonatomic) bool assetPurged;
@property (nonatomic) bool checkForNewerFailure;
@property (nonatomic) bool contentAvailableForUse;
@property (nonatomic) bool contentVersionRevoked;
@property (nonatomic) bool downloadAbandoned;
@property (nonatomic) bool downloadPending;
@property (nonatomic) bool downloadProgress;
@property (nonatomic) bool filesystemSpaceCritical;
@property (nonatomic) bool lockUsageCheck;
@property (nonatomic) bool newerVersionDiscovered;

+ (id)notifyRegistrationName:(id)arg1 forAssetType:(id)arg2;
+ (id)notifyRegistrationName:(id)arg1 forAssetType:(id)arg2 forAssetSpecifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (bool)assetPurged;
- (bool)checkForNewerFailure;
- (bool)contentAvailableForUse;
- (bool)contentVersionRevoked;
- (id)copy;
- (id)description;
- (bool)downloadAbandoned;
- (bool)downloadPending;
- (bool)downloadProgress;
- (void)encodeWithCoder:(id)arg1;
- (bool)filesystemSpaceCritical;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)lockUsageCheck;
- (id)newSummaryDictionary;
- (bool)newerVersionDiscovered;
- (void)setAssetPurged:(bool)arg1;
- (void)setCheckForNewerFailure:(bool)arg1;
- (void)setContentAvailableForUse:(bool)arg1;
- (void)setContentVersionRevoked:(bool)arg1;
- (void)setDownloadAbandoned:(bool)arg1;
- (void)setDownloadPending:(bool)arg1;
- (void)setDownloadProgress:(bool)arg1;
- (void)setFilesystemSpaceCritical:(bool)arg1;
- (void)setLockUsageCheck:(bool)arg1;
- (void)setNewerVersionDiscovered:(bool)arg1;
- (id)summary;

@end
