
@interface MAAutoAssetSetOverview : NSObject <NSSecureCoding> {
    long long  _activeClientCount;
    long long  _activeMonitorCount;
    NSString * _assetSetIdentifier;
    NSString * _clientDomainName;
    NSArray * _configuredAssetEntries;
    NSString * _discoveredAtomicInstance;
    NSArray * _downloadedAtomicInstances;
    NSString * _latestDownloadedAtomicInstance;
    long long  _maximumClientCount;
    long long  _totalClientCount;
}

@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic, retain) NSString *assetSetIdentifier;
@property (nonatomic, retain) NSString *clientDomainName;
@property (nonatomic, retain) NSArray *configuredAssetEntries;
@property (nonatomic, readonly, retain) NSString *discoveredAtomicInstance;
@property (nonatomic, retain) NSArray *downloadedAtomicInstances;
@property (nonatomic, retain) NSString *latestDownloadedAtomicInstance;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

+ (id)overviewNewMaxColumnStrings;
+ (id)overviewPaddedBanner:(id)arg1;
+ (id)overviewPaddedHeader:(id)arg1;
+ (id)overviewPaddedString:(id)arg1 paddingToLenghtOfString:(id)arg2 paddingWith:(id)arg3 paddingBefore:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_entry_string_to_use:(long long)arg1;
- (long long)activeClientCount;
- (long long)activeMonitorCount;
- (id)assetSetIdentifier;
- (id)clientDomainName;
- (id)configuredAssetEntries;
- (id)description;
- (id)description:(bool)arg1;
- (id)discoveredAtomicInstance;
- (id)downloadedAtomicInstances;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 forAssetSetIdentifier:(id)arg2 withConfiguredAssetEntries:(id)arg3 withLatestDownloadedAtomicInstance:(id)arg4 withDownloadedAtomicInstances:(id)arg5 withDiscoveredAtomicInstance:(id)arg6 withActiveClientCount:(long long)arg7 withActiveMonitorCount:(long long)arg8 withMaximumClientCount:(long long)arg9 withTotalClientCount:(long long)arg10;
- (id)latestDownloadedAtomicInstance;
- (long long)maximumClientCount;
- (void)overviewBuildMaxColumnStrings:(id)arg1;
- (id)overviewPadded:(id)arg1;
- (void)setActiveClientCount:(long long)arg1;
- (void)setActiveMonitorCount:(long long)arg1;
- (void)setAssetSetIdentifier:(id)arg1;
- (void)setClientDomainName:(id)arg1;
- (void)setConfiguredAssetEntries:(id)arg1;
- (void)setDownloadedAtomicInstances:(id)arg1;
- (void)setLatestDownloadedAtomicInstance:(id)arg1;
- (void)setMaximumClientCount:(long long)arg1;
- (void)setTotalClientCount:(long long)arg1;
- (id)summary;
- (long long)totalClientCount;

@end
