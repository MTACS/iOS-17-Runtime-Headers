
@interface FCFeedTransformationFilter : NSObject <FCFeedTransforming> {
    NSString * _briefingsTagID;
    FCBundleSubscription * _bundleSubscription;
    NSSet * _downloadedArticleIDs;
    unsigned long long  _filterOptions;
    NSSet * _mutedTagIDs;
    NSSet * _otherArticleIDs;
    NSSet * _otherClusterIDs;
    <FCPaidAccessCheckerType> * _paidAccessChecker;
    NSSet * _playlistArticleIDs;
    NSDictionary * _readingHistoryItems;
    NSSet * _subscribedTagIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transformationWithFilterOptions:(unsigned long long)arg1 configuration:(id)arg2 context:(id)arg3;
+ (id)transformationWithFilterOptions:(unsigned long long)arg1 configuration:(id)arg2 context:(id)arg3 otherArticleIDs:(id)arg4;
+ (id)transformationWithFilterOptions:(unsigned long long)arg1 otherArticleIDs:(id)arg2 otherClusterIDs:(id)arg3 subscribedTagIDs:(id)arg4 mutedTagIDs:(id)arg5 readingHistoryItems:(id)arg6 playlistArticleIDs:(id)arg7 downloadedArticleIDs:(id)arg8 briefingsTagID:(id)arg9 paidAccessChecker:(id)arg10 bundleSubscription:(id)arg11;

- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)transformFeedItemsWithResults:(id)arg1;
- (id)transformHeadline:(id)arg1;
- (id)transformHeadlines:(id)arg1;
- (id)transformHeadlinesWithResult:(id)arg1;

@end
