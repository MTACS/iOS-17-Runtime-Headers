
@interface MPCAssistantPlaybackQueue : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contextID;
    NSString * _featureName;
    NSString * _homeKitUserIdentifier;
    NSString * _queueGroupingID;
    bool  _shouldImmediatelyStartPlayback;
    bool  _shouldOverrideManuallyCuratedQueue;
    NSString * _siriAssetInfo;
    NSString * _siriRecommendationID;
    NSDictionary * _siriWHAMetricsInfo;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic, copy) NSString *homeKitUserIdentifier;
@property (nonatomic, copy) NSString *queueGroupingID;
@property (nonatomic) bool shouldImmediatelyStartPlayback;
@property (nonatomic) bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic, copy) NSString *siriAssetInfo;
@property (nonatomic, copy) NSString *siriRecommendationID;
@property (nonatomic, copy) NSDictionary *siriWHAMetricsInfo;
@property (nonatomic, copy) ICUserIdentity *userIdentity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct _MRSystemAppPlaybackQueue { }*)createRemotePlaybackQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)featureName;
- (void)getPlaybackQueueWithDestination:(id)arg1 completion:(id /* block */)arg2;
- (id)homeKitUserIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextID:(id)arg1;
- (id)queueGroupingID;
- (void)setFeatureName:(id)arg1;
- (void)setHomeKitUserIdentifier:(id)arg1;
- (void)setQueueGroupingID:(id)arg1;
- (void)setShouldImmediatelyStartPlayback:(bool)arg1;
- (void)setShouldOverrideManuallyCuratedQueue:(bool)arg1;
- (void)setSiriAssetInfo:(id)arg1;
- (void)setSiriRecommendationID:(id)arg1;
- (void)setSiriWHAMetricsInfo:(id)arg1;
- (void)setUserIdentity:(id)arg1;
- (bool)shouldImmediatelyStartPlayback;
- (bool)shouldOverrideManuallyCuratedQueue;
- (id)siriAssetInfo;
- (id)siriRecommendationID;
- (id)siriWHAMetricsInfo;
- (id)userIdentity;

@end
