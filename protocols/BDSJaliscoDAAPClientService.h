
@protocol BDSJaliscoDAAPClientService <NSObject>

@required

- (void)deleteItemsWithStoreIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)hideItemsWithStoreIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)resetPurchasedTokenForStoreIDs:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resetStaleJaliscoDatabaseWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setItemHidden:(void *)arg1 forStoreID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateFamilyPolitely:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateFamilyPolitely:(void *)arg1 reason:(void *)arg2 completionWithError:(void *)arg3; // needs 3 arg types, found 9: bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updatePolitely:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updatePolitely:(void *)arg1 reason:(void *)arg2 completionWithError:(void *)arg3; // needs 3 arg types, found 9: bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updatePolitelyAfterSignIn:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updatePolitelyAfterSignOut:(void *)arg1 reason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: bool, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
