
@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceEventsObserverProtocol>

@required

- (void)allEventsLimitedTo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)eventFromUniqueId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGEvent *, NSError *, void*
- (void)eventsForSchemas:(void *)arg1 usingStore:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, EKEventStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)isEventCandidateForURL:(void *)arg1 andTitle:(void *)arg2 containsSchemaOrg:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isEventCandidateForURL:(void *)arg1 andTitle:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)keysForSchemas:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)launchAppForSuggestedEventUsingLaunchInfo:(SGSuggestedEventLaunchInfo *)arg1 error:(id*)arg2;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGSuggestedEventLaunchInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (SGSuggestedEventLaunchInfo *)launchInfoForSuggestedEventWithUniqueIdentifier:(NSString *)arg1 sourceURL:(NSURL *)arg2 clientLocale:(NSLocale *)arg3 error:(id*)arg4;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(void *)arg1 sourceURL:(void *)arg2 clientLocale:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSURL *, NSLocale *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SGSuggestedEventLaunchInfo *, NSError *, void*
- (void)suggestionsFromURL:(void *)arg1 title:(void *)arg2 HTMLPayload:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
