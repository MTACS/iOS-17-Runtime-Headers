
@protocol WBTabGroupManagerShareAcceptanceHandler <NSObject>

@optional

- (void)tabGroupManager:(WBTabGroupManager *)arg1 didBeginAcceptingTabGroupShareWithMetadata:(CKShareMetadata *)arg2;
- (void)tabGroupManager:(WBTabGroupManager *)arg1 didFinishAcceptingTabGroupShareWithMetadata:(CKShareMetadata *)arg2 result:(long long)arg3;
- (void)tabGroupManager:(void *)arg1 selectProfileIdentifierForShareMetadata:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WBTabGroupManager *, CKShareMetadata *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*

@end
