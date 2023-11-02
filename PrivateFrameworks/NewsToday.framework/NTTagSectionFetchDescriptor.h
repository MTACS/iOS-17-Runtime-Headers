
@interface NTTagSectionFetchDescriptor : NSObject <NTSectionFetchDescriptor> {
    NTCatchUpOperationForYouRequest * _forYouRequest;
    NTCatchUpOperationTagRequest * _tagRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NTCatchUpOperationForYouRequest *forYouRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NTCatchUpOperationTagRequest *tagRequest;

- (void).cxx_destruct;
- (id)assembleResultsWithCatchUpOperation:(id)arg1;
- (void)configureCatchUpOperationWithFetchRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)forYouRequest;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned long long)arg2 priorFeedItems:(id)arg3;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)arg1;
- (id)init;
- (id)initWithTagConfiguration:(id)arg1 appConfiguration:(id)arg2 purchasedTagIDs:(id)arg3 bundleSubscriptionProvider:(id)arg4;
- (void)setForYouRequest:(id)arg1;
- (void)setTagRequest:(id)arg1;
- (id)tagRequest;

@end
