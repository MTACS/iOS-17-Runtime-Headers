
@protocol IAMMessageEntryProvider <NSObject>

@required

- (<IAMMessageEntryProviderDelegate> *)delegate;
- (void)downloadResourcesForMessageWithIdentifier:(void *)arg1 bundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)messageEntriesForBundleIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)removeApplicationBadgeForBundleIdentifier:(void *)arg1 fromPresentedMessageEntry:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, ICInAppMessageEntry *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeMessageEntryWithIdentifier:(void *)arg1 forBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)reportEventForMessageIdentifier:(void *)arg1 withParams:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <IAMMessageEntryProviderDelegate>)arg1;

@end
