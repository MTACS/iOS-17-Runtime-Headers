
@interface SLRemoteSession : NSObject {
    NSXPCConnection * _connection;
    SLDatabase * _database;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) SLDatabase *database;

- (void).cxx_destruct;
- (bool)clientHasEntitlement:(id)arg1;
- (id)connection;
- (id)database;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setDatabase:(id)arg1;

@end
