
@protocol PFFairPlayKeyLoading

@required

- (void)createSessionWithAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PFFairPlayAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PFFairPlayKeySession> *, NSError *, void*
- (void)renewKeyRequestWithAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PFFairPlayAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)renewKeyRequestsWithAssets:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)startKeyRequestWithSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PFFairPlayKeySession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopKeyRequestWithAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PFFairPlayAsset *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)stopKeyRequestWithSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <PFFairPlayKeySession> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
