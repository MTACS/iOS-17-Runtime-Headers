
@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming> {
    unsigned long long  _embedsLimit;
    <NTFeedTransforming> * _underlyingTransformation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long embedsLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NTFeedTransforming> *underlyingTransformation;

- (void).cxx_destruct;
- (unsigned long long)embedsLimit;
- (id)init;
- (id)initWithTodayData:(id)arg1 configurationManager:(id)arg2 readArticlesFilterMethod:(int)arg3 seenArticlesFilterMethod:(int)arg4 minimumTimeSinceFirstSeenToFilter:(double)arg5 supplementalFeedFilterOptions:(unsigned long long)arg6 embedsLimit:(unsigned long long)arg7 otherArticleIDs:(id)arg8 otherClusterIDs:(id)arg9 filterDate:(id)arg10;
- (id)transformFeedItems:(id)arg1;
- (id)underlyingTransformation;

@end
