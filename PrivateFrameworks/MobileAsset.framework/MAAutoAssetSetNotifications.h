
@interface MAAutoAssetSetNotifications : NSObject <NSSecureCoding> {
    bool  _atomicInstanceAvailableForUse;
    bool  _atomicInstanceDiscovered;
    bool  _atomicInstancePurged;
    bool  _downloadAbandoned;
    bool  _downloadPending;
    bool  _downloadProgress;
    bool  _downloadedBecameIncomplete;
    bool  _filesystemSpaceCritical;
    bool  _lockUsageCheck;
}

@property (nonatomic) bool atomicInstanceAvailableForUse;
@property (nonatomic) bool atomicInstanceDiscovered;
@property (nonatomic) bool atomicInstancePurged;
@property (nonatomic) bool downloadAbandoned;
@property (nonatomic) bool downloadPending;
@property (nonatomic) bool downloadProgress;
@property (nonatomic) bool downloadedBecameIncomplete;
@property (nonatomic) bool filesystemSpaceCritical;
@property (nonatomic) bool lockUsageCheck;

+ (id)notifyRegistrationName:(id)arg1;
+ (id)notifyRegistrationName:(id)arg1 forAssetSetIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (bool)atomicInstanceAvailableForUse;
- (bool)atomicInstanceDiscovered;
- (bool)atomicInstancePurged;
- (id)copy;
- (id)description;
- (bool)downloadAbandoned;
- (bool)downloadPending;
- (bool)downloadProgress;
- (bool)downloadedBecameIncomplete;
- (void)encodeWithCoder:(id)arg1;
- (bool)filesystemSpaceCritical;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)lockUsageCheck;
- (void)setAtomicInstanceAvailableForUse:(bool)arg1;
- (void)setAtomicInstanceDiscovered:(bool)arg1;
- (void)setAtomicInstancePurged:(bool)arg1;
- (void)setDownloadAbandoned:(bool)arg1;
- (void)setDownloadPending:(bool)arg1;
- (void)setDownloadProgress:(bool)arg1;
- (void)setDownloadedBecameIncomplete:(bool)arg1;
- (void)setFilesystemSpaceCritical:(bool)arg1;
- (void)setLockUsageCheck:(bool)arg1;
- (id)summary;

@end
