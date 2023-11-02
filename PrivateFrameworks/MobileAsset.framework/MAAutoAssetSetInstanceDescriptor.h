
@interface MAAutoAssetSetInstanceDescriptor : NSObject <NSSecureCoding> {
    NSString * _assetSetIdentifier;
    NSArray * _atomicInstanceEntries;
    NSString * _clientDomainName;
    bool  _downloadUserInitiated;
    long long  _downloadedFilesystemBytes;
    long long  _downloadedNetworkBytes;
    bool  _isFullyDownloaded;
    bool  _neverBeenLocked;
    bool  _stagedPriorToAvailable;
}

@property (nonatomic, readonly, retain) NSString *assetSetIdentifier;
@property (nonatomic, readonly, retain) NSArray *atomicInstanceEntries;
@property (nonatomic, readonly, retain) NSString *clientDomainName;
@property (nonatomic, readonly) bool downloadUserInitiated;
@property (nonatomic, readonly) long long downloadedFilesystemBytes;
@property (nonatomic, readonly) long long downloadedNetworkBytes;
@property (nonatomic, readonly) bool isFullyDownloaded;
@property (nonatomic, readonly) bool neverBeenLocked;
@property (nonatomic, readonly) bool stagedPriorToAvailable;

+ (id)newMaxColumnStrings;
+ (id)paddedBanner:(id)arg1;
+ (id)paddedHeader:(id)arg1;
+ (id)paddedString:(id)arg1 paddingToLenghtOfString:(id)arg2 paddingWith:(id)arg3 paddingBefore:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSetIdentifier;
- (id)atomicInstanceEntries;
- (void)buildMaxColumnStrings:(id)arg1;
- (id)clientDomainName;
- (id)description;
- (id)description:(bool)arg1;
- (bool)downloadUserInitiated;
- (long long)downloadedFilesystemBytes;
- (long long)downloadedNetworkBytes;
- (void)encodeWithCoder:(id)arg1;
- (id)initForClientDomainName:(id)arg1 forAssetSetIdentifier:(id)arg2 withAtomicInstanceEntries:(id)arg3 withFullyDownloaded:(bool)arg4 withNeverBeenLocked:(bool)arg5 withDownloadUserInitiated:(bool)arg6 withDownloadedNetworkBytes:(long long)arg7 withDownloadedFilesystemBytes:(long long)arg8 withStagedPriorToAvailable:(bool)arg9;
- (id)initWithCoder:(id)arg1;
- (bool)isFullyDownloaded;
- (bool)neverBeenLocked;
- (id)padded:(id)arg1;
- (bool)stagedPriorToAvailable;
- (id)summary;

@end
