
@interface QuickWebsiteSearchQuery : NSObject {
    WBSCompletionQuery * _completionQuery;
    NSString * _searchTerms;
    NSString * _websiteNamePrefix;
}

@property (nonatomic, readonly) WBSCompletionQuery *completionQuery;
@property (nonatomic, readonly) NSString *searchTerms;
@property (nonatomic, readonly) NSString *websiteNamePrefix;

- (void).cxx_destruct;
- (id)completionQuery;
- (id)initWithUserEnteredQuery:(id)arg1;
- (id)searchTerms;
- (id)websiteNamePrefix;

@end
