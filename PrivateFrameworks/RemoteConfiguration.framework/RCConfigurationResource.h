
@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _configurationID;
    NSString * _contentHash;
    NSNumber * _endpointMaxAge;
    NSString * _etag;
    NSNumber * _fallbackMaxAge;
    NSData * _gzippedConfigurationData;
    NSDate * _lastFetchedDate;
    NSString * _lastModifiedFallbackString;
    NSString * _lastModifiedString;
    NSString * _requestKey;
    NSArray * _segmentSetIDs;
    NSArray * _treatmentIDs;
    NSString * _userID;
    RCUserSegmentationConfiguration * _userSegmentationConfiguration;
}

@property (nonatomic, readonly) NSData *configurationData;
@property (nonatomic, retain) NSString *configurationID;
@property (nonatomic, retain) NSString *contentHash;
@property (nonatomic, retain) NSNumber *endpointMaxAge;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSNumber *fallbackMaxAge;
@property (nonatomic, retain) NSData *gzippedConfigurationData;
@property (nonatomic, retain) NSDate *lastFetchedDate;
@property (nonatomic, retain) NSString *lastModifiedFallbackString;
@property (nonatomic, retain) NSString *lastModifiedString;
@property (nonatomic, retain) NSString *requestKey;
@property (nonatomic, retain) NSArray *segmentSetIDs;
@property (nonatomic, retain) NSArray *treatmentIDs;
@property (nonatomic, retain) NSString *userID;
@property (nonatomic, retain) RCUserSegmentationConfiguration *userSegmentationConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configurationData;
- (id)configurationID;
- (id)contentHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointMaxAge;
- (id)etag;
- (id)fallbackMaxAge;
- (id)gzippedConfigurationData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExpiredWithMaxTTL:(double)arg1 allowedToReachEndpoint:(bool)arg2;
- (id)lastFetchedDate;
- (id)lastModifiedFallbackString;
- (id)lastModifiedString;
- (id)requestKey;
- (id)segmentSetIDs;
- (void)setConfigurationID:(id)arg1;
- (void)setContentHash:(id)arg1;
- (void)setEndpointMaxAge:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setFallbackMaxAge:(id)arg1;
- (void)setGzippedConfigurationData:(id)arg1;
- (void)setLastFetchedDate:(id)arg1;
- (void)setLastModifiedFallbackString:(id)arg1;
- (void)setLastModifiedString:(id)arg1;
- (void)setRequestKey:(id)arg1;
- (void)setSegmentSetIDs:(id)arg1;
- (void)setTreatmentIDs:(id)arg1;
- (void)setUserID:(id)arg1;
- (void)setUserSegmentationConfiguration:(id)arg1;
- (id)treatmentIDs;
- (id)userID;
- (id)userSegmentationConfiguration;

@end
