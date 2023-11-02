
@protocol SORemoteExtensionContextProtocol <SOExtensionContextProtocol, POExtensionRegistrationHostProtocol>

@required

- (void)beginAuthorizationWithRequestParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SOAuthorizationRequestParameters *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)beginAuthorizationWithServiceXPCEndpoint:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)cancelAuthorization:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SOAuthorizationCredential *, NSError *, void*
- (void)finishAuthorization:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
