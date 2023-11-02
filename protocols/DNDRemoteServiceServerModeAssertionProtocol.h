
@protocol DNDRemoteServiceServerModeAssertionProtocol <NSObject>

@required

- (void)getActiveModeAssertionWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertion *, NSError *, void*
- (void)getAllModeAssertionsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray<__DNDModeAssertion__> *, NSError *, void*
- (void)getLatestModeAssertionInvalidationWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertionInvalidation *, NSError *, void*
- (void)invalidateActiveModeAssertionWithDetails:(void *)arg1 reasonOverride:(void *)arg2 requestDetails:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: DNDModeAssertionInvalidationDetails *, NSNumber *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertionInvalidation *, NSError *, void*
- (void)invalidateAllActiveModeAssertionsWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)takeModeAssertionWithDetails:(void *)arg1 requestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDModeAssertionDetails *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertion *, NSError *, void*

@end
