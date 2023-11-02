
@protocol REResourceSharingService <NSObject>

@required

- (void)fetchResourceAtAssetPath:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RESharedResourcePayload *, NSError *, void*
- (void)setSubscriptionOptions:(REResourceRequestOptions *)arg1 forResourceAtAssetPath:(NSString *)arg2;
- (void)unsubscribeFromResourceAtAssetPath:(NSString *)arg1;

@end
