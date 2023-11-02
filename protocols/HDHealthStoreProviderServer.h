
@protocol HDHealthStoreProviderServer <NSObject>

@required

- (void)remote_fetchAvailableIdentifiersWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)remote_fetchForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKHealthStoreIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_requestAuthorizationToNewIdentifierToShareTypes:(void *)arg1 readTypes:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHealthStoreIdentifier *, NSError *, void*
- (void)remote_requestAuthorizationToNewIdentifierWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKHealthStoreIdentifier *, NSError *, void*

@end
