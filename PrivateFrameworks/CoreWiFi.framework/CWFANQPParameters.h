
@interface CWFANQPParameters : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _ANQPElementIDList;
    bool  _cacheOnly;
    bool  _includeMatchingKnownNetworkProfiles;
    unsigned long long  _maximumCacheAge;
    NSArray * _scanResults;
}

@property (nonatomic, copy) NSArray *ANQPElementIDList;
@property (nonatomic) bool cacheOnly;
@property (nonatomic) bool includeMatchingKnownNetworkProfiles;
@property (nonatomic) unsigned long long maximumCacheAge;
@property (nonatomic, copy) NSArray *scanResults;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ANQPElementIDList;
- (bool)cacheOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeMatchingKnownNetworkProfiles;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToANQPParameters:(id)arg1;
- (unsigned long long)maximumCacheAge;
- (id)scanResults;
- (void)setANQPElementIDList:(id)arg1;
- (void)setCacheOnly:(bool)arg1;
- (void)setIncludeMatchingKnownNetworkProfiles:(bool)arg1;
- (void)setMaximumCacheAge:(unsigned long long)arg1;
- (void)setScanResults:(id)arg1;

@end
