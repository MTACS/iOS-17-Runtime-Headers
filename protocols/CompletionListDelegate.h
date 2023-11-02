
@protocol CompletionListDelegate <NSObject>

@required

- (void)completionList:(CompletionList *)arg1 didFetchFavicon:(UIImage *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)completionList:(void *)arg1 didRemoveItem:(void *)arg2 wasLastInSection:(void *)arg3 atIndexPath:(void *)arg4 withCompletionHandler:(void *)arg5; // needs 5 arg types, found 10: CompletionList *, <CompletionItem> *, bool, NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)completionList:(CompletionList *)arg1 topHitDidBecomeReadyForString:(NSString *)arg2;
- (void)completionListDidRestoreCachedCompletions:(CompletionList *)arg1;
- (void)completionListDidUpdate:(CompletionList *)arg1 forQuery:(WBSCompletionQuery *)arg2;

@end
