
@interface ENRemoteUISession : NSObject {
    ENXPCConnection * _connection;
    NSObject<OS_xpc_object> * _originalRequest;
    NSUUID * _sessionID;
}

@property (nonatomic) ENXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_xpc_object> *originalRequest;
@property (nonatomic, copy) NSUUID *sessionID;

- (void).cxx_destruct;
- (id)connection;
- (id)originalRequest;
- (id)sessionID;
- (void)setConnection:(id)arg1;
- (void)setOriginalRequest:(id)arg1;
- (void)setSessionID:(id)arg1;

@end
