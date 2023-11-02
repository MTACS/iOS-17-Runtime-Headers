
@interface NTForYouSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {
    NTCatchUpOperationForYouRequest * _forYouRequest;
    unsigned long long  _localNewsPromotionIndex;
    NTCatchUpOperationArticleIDsRequest * _localNewsRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NTCatchUpOperationForYouRequest *forYouRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long localNewsPromotionIndex;
@property (nonatomic, copy) NTCatchUpOperationArticleIDsRequest *localNewsRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)forYouRequest;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithForYouConfiguration:(id)arg1 appConfiguration:(id)arg2 topStoriesChannelID:(id)arg3 hiddenFeedIDs:(id)arg4 allowPaidBundleFeed:(bool)arg5 mutedTagIDs:(id)arg6 purchasedTagIDs:(id)arg7 subscribedTagIDs:(id)arg8 bundleSubscriptionProvider:(id)arg9;
- (unsigned long long)localNewsPromotionIndex;
- (id)localNewsRequest;
- (void)setForYouRequest:(id)arg1;
- (void)setLocalNewsPromotionIndex:(unsigned long long)arg1;
- (void)setLocalNewsRequest:(id)arg1;

@end
