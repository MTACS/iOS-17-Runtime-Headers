
@interface INPrivateMediaItemValueData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _ampConfidenceLevel;
    NSNumber * _ampConfidenceScore;
    NSString * _assetInfo;
    NSString * _bundleId;
    NSArray * _internalSignals;
    NSNumber * _isAvailable;
    NSNumber * _isHardBan;
    NSArray * _mediaSubItems;
    NSString * _provider;
    NSString * _providerAppName;
    NSString * _punchoutURI;
    NSString * _recommendationId;
    NSNumber * _requiresSubscription;
    NSString * _sharedUserIdFromPlayableMusicAccount;
    NSString * _universalResourceLink;
}

@property (nonatomic, readonly) long long ampConfidenceLevel;
@property (nonatomic, readonly, copy) NSNumber *ampConfidenceScore;
@property (nonatomic, readonly, copy) NSString *assetInfo;
@property (nonatomic, readonly, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *internalSignals;
@property (nonatomic, readonly, copy) NSNumber *isAvailable;
@property (nonatomic, readonly, copy) NSNumber *isHardBan;
@property (nonatomic, readonly, copy) NSArray *mediaSubItems;
@property (nonatomic, readonly, copy) NSString *provider;
@property (nonatomic, readonly, copy) NSString *providerAppName;
@property (nonatomic, readonly, copy) NSString *punchoutURI;
@property (nonatomic, readonly, copy) NSString *recommendationId;
@property (nonatomic, readonly, copy) NSNumber *requiresSubscription;
@property (nonatomic, readonly, copy) NSString *sharedUserIdFromPlayableMusicAccount;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *universalResourceLink;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)ampConfidenceLevel;
- (id)ampConfidenceScore;
- (id)assetInfo;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 mediaSubItems:(id)arg3;
- (id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 mediaSubItems:(id)arg5;
- (id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 requiresSubscription:(id)arg5 provider:(id)arg6 isAvailable:(id)arg7 isHardBan:(id)arg8 bundleId:(id)arg9 universalResourceLink:(id)arg10 providerAppName:(id)arg11 internalSignals:(id)arg12 ampConfidenceScore:(id)arg13 ampConfidenceLevel:(long long)arg14 mediaSubItems:(id)arg15;
- (id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 requiresSubscription:(id)arg5 provider:(id)arg6 isAvailable:(id)arg7 isHardBan:(id)arg8 bundleId:(id)arg9 universalResourceLink:(id)arg10 providerAppName:(id)arg11 internalSignals:(id)arg12 mediaSubItems:(id)arg13;
- (id)initWithRecommendationId:(id)arg1 assetInfo:(id)arg2 sharedUserIdFromPlayableMusicAccount:(id)arg3 punchoutURI:(id)arg4 requiresSubscription:(id)arg5 provider:(id)arg6 isAvailable:(id)arg7 isHardBan:(id)arg8 bundleId:(id)arg9 universalResourceLink:(id)arg10 providerAppName:(id)arg11 mediaSubItems:(id)arg12;
- (id)internalSignals;
- (id)isAvailable;
- (bool)isEqual:(id)arg1;
- (id)isHardBan;
- (id)mediaSubItems;
- (id)provider;
- (id)providerAppName;
- (id)punchoutURI;
- (id)recommendationId;
- (id)requiresSubscription;
- (id)sharedUserIdFromPlayableMusicAccount;
- (id)universalResourceLink;

@end
