
@interface WBSSystemNoteTakingLinkMetadataFetcher : NSObject

+ (id)sharedFetcher;

- (void)fetchMetadataForWebView:(id)arg1 completion:(id /* block */)arg2;
- (id)linkContextPreviewForMetadata:(id)arg1 image:(id)arg2 selectedText:(id)arg3;

@end
