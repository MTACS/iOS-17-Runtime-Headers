
@interface GEOMessage : NSObject {
    NSString * _messageName;
    GEOPeer * _peer;
    GEOApplicationAuditToken * _preferredAuditToken;
    GEODataRequestThrottlerToken * _throttleToken;
    NSDictionary * _userInfo;
    NSObject<OS_xpc_object> * _xpcMessage;
}

@property (nonatomic, readonly) NSString *messageName;
@property (nonatomic, readonly) GEOPeer *peer;
@property (nonatomic, readonly) GEOApplicationAuditToken *preferredAuditToken;
@property (nonatomic, readonly) GEODataRequestThrottlerToken *throttleToken;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithXPCMessage:(id)arg1 peer:(id)arg2;
- (id)messageName;
- (id)peer;
- (id)preferredAuditToken;
- (void)sendReply:(id)arg1;
- (void)sendReplyWithXPCUserInfo:(id)arg1;
- (id)throttleToken;
- (id)userInfo;

@end
