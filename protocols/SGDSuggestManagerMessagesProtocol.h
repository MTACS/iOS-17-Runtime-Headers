
@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>

@required

- (void)harvestedSuggestionsFromMessage:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: CSSearchableItem *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse3 *, void*
- (void)harvestedSuggestionsFromMessage:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: CSSearchableItem *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse1 *, void*
- (void)harvestedSuggestionsFromMessages:(void *)arg1 bundleIdentifier:(void *)arg2 options:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSArray *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse3 *, void*
- (void)suggestionsFromMessage:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: CSSearchableItem *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGXPCResponse3 *, void*

@end
