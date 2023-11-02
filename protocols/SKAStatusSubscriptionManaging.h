
@protocol SKAStatusSubscriptionManaging <NSObject>

@required

- (bool)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(NSString *)arg1;
- (void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(void *)arg1 statusTypeIdentifier:(void *)arg2 applicationIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(void *)arg1 client:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(void *)arg1 statusTypeIdentifier:(void *)arg2 client:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(void *)arg1 statusTypeIdentifier:(void *)arg2 applicationIdentifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(void *)arg1 client:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(void *)arg1 statusTypeIdentifier:(void *)arg2 client:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, <SKAClientConnectionRepresentable> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
