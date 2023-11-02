
@protocol PPQuickTypeServerProtocol <PPFeedbackAccepting>

@required

- (void)hibernateWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)quickTypeItemsWithLanguageModelingTokens:(void *)arg1 localeIdentifier:(void *)arg2 recipients:(void *)arg3 bundleIdentifier:(void *)arg4 limit:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSDictionary *, NSString *, NSArray *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, PPQuickTypeExplanationSet *, void*
- (void)quickTypeItemsWithQuery:(void *)arg1 limit:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PPQuickTypeQuery *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, PPQuickTypeExplanationSet *, void*
- (void)recentQuickTypeItemsForRecipients:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)warmUpWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
