
@interface FOAuthorizationCenter : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSArray *authorizationRecords;
@property (readonly) NSXPCConnection *xpcConnection;

+ (id)sharedCenter;

- (void).cxx_destruct;
- (id)authorizationRecords;
- (void)dealloc;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (void)requestAuthorizationForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestInternalAuthorizationForMember:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)resetAuthorizationForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)revokeAuthorizationForDeletionForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)revokeAuthorizationForRecordIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)revokeInternalAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
