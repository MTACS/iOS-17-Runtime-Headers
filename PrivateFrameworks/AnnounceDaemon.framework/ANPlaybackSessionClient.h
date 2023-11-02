
@interface ANPlaybackSessionClient : NSObject {
    NSXPCConnection * _connection;
    NSUUID * _endpointID;
    NSString * _groupID;
    NSString * _sessionID;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSUUID *endpointID;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, retain) NSString *sessionID;

+ (id)clientWithXPCConnection:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)copy;
- (id)description;
- (id)endpointID;
- (id)groupID;
- (id)sessionID;
- (void)setConnection:(id)arg1;
- (void)setEndpointID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setSessionID:(id)arg1;

@end
