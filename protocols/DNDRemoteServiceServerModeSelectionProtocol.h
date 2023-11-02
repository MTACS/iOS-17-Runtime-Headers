
@protocol DNDRemoteServiceServerModeSelectionProtocol <NSObject>

@required

- (void)activateModeWithDetails:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: DNDModeAssertionDetails *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)activeModeAssertionWithRequestDetails:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DNDModeAssertion *, NSError *, void*
- (void)invalidateModeAssertionWithUUID:(void *)arg1 withRequestDetails:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, DNDRequestDetails *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*

@end
