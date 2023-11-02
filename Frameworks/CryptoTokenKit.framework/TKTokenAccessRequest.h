
@interface TKTokenAccessRequest : NSObject {
    NSString * _clientBundleID;
    NSXPCConnection * _clientConnection;
    bool  _clientHasAccessTokenEntitlement;
    NSString * _clientName;
    NSUUID * _correlationID;
    NSString * _providerBundleID;
    NSString * _providerName;
    TKTokenID * _tokenID;
}

@property (nonatomic, readonly) NSString *clientBundleID;
@property (nonatomic, readonly) NSXPCConnection *clientConnection;
@property (nonatomic, readonly) bool clientHasAccessTokenEntitlement;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly) NSUUID *correlationID;
@property (nonatomic, readonly) NSString *providerBundleID;
@property (nonatomic, readonly) NSString *providerName;
@property (nonatomic, readonly) TKTokenID *tokenID;

- (void).cxx_destruct;
- (id)clientBundleID;
- (id)clientConnection;
- (bool)clientHasAccessTokenEntitlement;
- (id)clientName;
- (id)correlationID;
- (id)initWithCaller:(id)arg1 tokenID:(id)arg2 extension:(id)arg3;
- (id)initWithClientBundleID:(id)arg1 clientName:(id)arg2 clientConnection:(id)arg3 clientHasAccessTokenEntitlement:(bool)arg4 tokenID:(id)arg5 providerBundleID:(id)arg6 providerName:(id)arg7 correlationID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)providerBundleID;
- (id)providerName;
- (id)tokenID;

@end
