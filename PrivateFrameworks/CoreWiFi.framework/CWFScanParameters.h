
@interface CWFScanParameters : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _ANQPElementIDListForPasspointScanResults;
    NSString * _BSSID;
    int  _BSSType;
    int  _PHYMode;
    NSString * _SSID;
    NSArray * _SSIDList;
    bool  _cacheOnly;
    NSArray * _channels;
    unsigned long long  _dwellTime;
    bool  _includeHiddenNetworks;
    bool  _includeMatchingKnownNetworkProfiles;
    NSSet * _includeProperties;
    NSArray * _includeScanResults;
    unsigned long long  _maximumANQPCacheAgeForPasspointScanResults;
    unsigned long long  _maximumAge;
    unsigned long long  _maximumCacheAge;
    bool  _mergeScanResults;
    long long  _minimumRSSI;
    unsigned long long  _numberOfScans;
    unsigned long long  _restTime;
    int  _scanFlags;
    int  _scanType;
    unsigned long long  _shortSSID;
}

@property (nonatomic, copy) NSArray *ANQPElementIDListForPasspointScanResults;
@property (nonatomic, copy) NSString *BSSID;
@property (nonatomic) int BSSType;
@property (nonatomic) int PHYMode;
@property (nonatomic, copy) NSString *SSID;
@property (nonatomic, copy) NSArray *SSIDList;
@property (nonatomic) bool cacheOnly;
@property (nonatomic, copy) NSArray *channels;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) bool includeHiddenNetworks;
@property (nonatomic) bool includeMatchingKnownNetworkProfiles;
@property (nonatomic, copy) NSSet *includeProperties;
@property (nonatomic, copy) NSArray *includeScanResults;
@property (nonatomic) unsigned long long maximumANQPCacheAgeForPasspointScanResults;
@property (nonatomic) unsigned long long maximumAge;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic) bool mergeScanResults;
@property (nonatomic) long long minimumRSSI;
@property (nonatomic) unsigned long long numberOfScans;
@property (nonatomic) unsigned long long restTime;
@property (nonatomic) int scanFlags;
@property (nonatomic) int scanType;
@property (nonatomic) unsigned long long shortSSID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ANQPElementIDListForPasspointScanResults;
- (id)BSSID;
- (int)BSSType;
- (int)PHYMode;
- (id)SSID;
- (id)SSIDList;
- (bool)cacheOnly;
- (id)channels;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)dwellTime;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeHiddenNetworks;
- (bool)includeMatchingKnownNetworkProfiles;
- (id)includeProperties;
- (id)includeScanResults;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScanParameters:(id)arg1;
- (unsigned long long)maximumANQPCacheAgeForPasspointScanResults;
- (unsigned long long)maximumAge;
- (unsigned long long)maximumCacheAge;
- (bool)mergeScanResults;
- (long long)minimumRSSI;
- (unsigned long long)numberOfScans;
- (unsigned long long)restTime;
- (int)scanFlags;
- (int)scanType;
- (void)setANQPElementIDListForPasspointScanResults:(id)arg1;
- (void)setBSSID:(id)arg1;
- (void)setBSSType:(int)arg1;
- (void)setCacheOnly:(bool)arg1;
- (void)setChannels:(id)arg1;
- (void)setDwellTime:(unsigned long long)arg1;
- (void)setIncludeHiddenNetworks:(bool)arg1;
- (void)setIncludeMatchingKnownNetworkProfiles:(bool)arg1;
- (void)setIncludeProperties:(id)arg1;
- (void)setIncludeScanResults:(id)arg1;
- (void)setMaximumANQPCacheAgeForPasspointScanResults:(unsigned long long)arg1;
- (void)setMaximumAge:(unsigned long long)arg1;
- (void)setMaximumCacheAge:(unsigned long long)arg1;
- (void)setMergeScanResults:(bool)arg1;
- (void)setMinimumRSSI:(long long)arg1;
- (void)setNumberOfScans:(unsigned long long)arg1;
- (void)setPHYMode:(int)arg1;
- (void)setRestTime:(unsigned long long)arg1;
- (void)setSSID:(id)arg1;
- (void)setSSIDList:(id)arg1;
- (void)setScanFlags:(int)arg1;
- (void)setScanType:(int)arg1;
- (void)setShortSSID:(unsigned long long)arg1;
- (unsigned long long)shortSSID;

@end
