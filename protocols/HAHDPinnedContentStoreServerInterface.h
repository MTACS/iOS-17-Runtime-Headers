
@protocol HAHDPinnedContentStoreServerInterface <NSObject>

@required

- (void)remote_fetchPinnedContentInDomain:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_movePinnedContentWithIdentifier:(void *)arg1 inDomain:(void *)arg2 toIndex:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_pinContentWithIdentifier:(void *)arg1 inDomain:(void *)arg2 atIndex:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_unpinAllContentInDomain:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_unpinContentWithIdentifier:(void *)arg1 inDomain:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
