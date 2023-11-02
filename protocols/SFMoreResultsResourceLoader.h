
@protocol SFMoreResultsResourceLoader <NSObject>

@required

- (bool)canLoadMoreResults:(SFMoreResults *)arg1;
- (void)loadMoreResults:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: SFMoreResults *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
