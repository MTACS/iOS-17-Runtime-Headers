
@protocol PKSubscriptionController

@required

- (void)subscribeToFeedUrl:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)subscribeToStoreId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PKStoreId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)subscribeToStoreId:(void *)arg1 siriContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKStoreId *, PKSiriContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
