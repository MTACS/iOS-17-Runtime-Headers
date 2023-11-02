
@interface TSPrefetchedArticlesFetchResult : NSObject {
    void articleIDs;
    void prefetchedHeadlines;
    void selectedArticleID;
}

@property (nonatomic, readonly) NSArray *articleIDs;
@property (nonatomic, readonly) NSDictionary *prefetchedHeadlines;
@property (nonatomic, readonly) NSString *selectedArticleID;

- (void).cxx_destruct;
- (id)articleIDs;
- (id)init;
- (id)initWithSelectedArticleID:(id)arg1 articleIDs:(id)arg2 prefetchedHeadlines:(id)arg3;
- (id)prefetchedHeadlines;
- (id)selectedArticleID;

@end
