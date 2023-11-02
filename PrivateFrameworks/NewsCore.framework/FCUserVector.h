
@interface FCUserVector : NSObject {
    NSOrderedSet * _bundleChannelIDs;
    NSString * _bundleChannelIDsVersion;
    NSURL * _modelURL;
    FCPersonalizationTreatment * _personalizationTreatment;
    NSOrderedSet * _sportsTagIDs;
    FCSubscriptionController * _subscriptionController;
    NSURL * _whitelistURL;
}

@property (nonatomic, retain) NSOrderedSet *bundleChannelIDs;
@property (nonatomic, retain) NSString *bundleChannelIDsVersion;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, retain) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, retain) NSOrderedSet *sportsTagIDs;
@property (nonatomic, retain) FCSubscriptionController *subscriptionController;
@property (nonatomic, retain) NSURL *whitelistURL;

- (void).cxx_destruct;
- (id)bundleChannelIDs;
- (id)bundleChannelIDsVersion;
- (id)bundleSubscribedVector;
- (id)computePersonalizationVectorWithAggregateStore:(id)arg1 personalizationTreatment:(id)arg2 tagRanker:(id)arg3 options:(long long)arg4;
- (id)findVector:(id)arg1 closestToBins:(id)arg2;
- (id)init;
- (id)initWithWhitelistURL:(id)arg1 modelURL:(id)arg2 personalizationTreatment:(id)arg3 bundleChannelIDs:(id)arg4 bundleChannelIDsVersion:(id)arg5 subscriptionController:(id)arg6 sportsTagIDs:(id)arg7;
- (id)modelURL;
- (id)personalizationTreatment;
- (void)setBundleChannelIDs:(id)arg1;
- (void)setBundleChannelIDsVersion:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setSportsTagIDs:(id)arg1;
- (void)setSubscriptionController:(id)arg1;
- (void)setWhitelistURL:(id)arg1;
- (id)sportsTagIDs;
- (id)subscribedBundleChannelIDs;
- (id)subscribedSportsTagsWithPersonalizationTreatment:(id)arg1 tagRanker:(id)arg2;
- (id)subscriptionController;
- (id)whitelistURL;

@end
