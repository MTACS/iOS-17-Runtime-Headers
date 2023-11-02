
@protocol HMDAccessoryUserManagement <NSObject>

@required

- (void)addUser:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMDUser *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (HMFPairingIdentity *)pairingIdentity;
- (void)pairingsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeUser:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMDUser *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)supportsUserManagement;

@end
