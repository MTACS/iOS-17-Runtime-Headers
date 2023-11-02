
@interface WBSOpenSearchSchemaFetcher : NSObject {
    NSMutableSet * _openSearchDescriptionURLs;
}

+ (id)sharedFetcher;

- (void).cxx_destruct;
- (void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1;
- (void)fetchOpenSearchDescriptionWithURL:(id)arg1;

@end
