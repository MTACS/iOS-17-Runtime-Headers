
@protocol HKSharingAuthorizationRecipientStoreServerInterface <NSObject>

@required

- (void)remote_fetchRecipientIdentifiersWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)remote_registerObservers;
- (void)remote_unregisterObservers;

@end
