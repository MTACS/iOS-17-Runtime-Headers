
@protocol SOServiceProtocol <NSObject>

@required

- (void)beginAuthorizationWithRequestParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: SOAuthorizationRequestParametersCore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSXPCListenerEndpoint *, NSError *, void*
- (void)cancelAuthorization:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)configurationWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SOConfiguration *, NSError *, void*
- (void)debugHintsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)finishAuthorization:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)getAuthorizationHintsWithURL:(void *)arg1 responseCode:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SOAuthorizationHintsCore *, NSError *, void*
- (void)isExtensionProcessWithAuditToken:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performAuthorizationWithRequestParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SOAuthorizationRequestParametersCore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SOAuthorizationCredentialCore *, NSError *, void*
- (void)profilesWithExtensionBundleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)realmsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
