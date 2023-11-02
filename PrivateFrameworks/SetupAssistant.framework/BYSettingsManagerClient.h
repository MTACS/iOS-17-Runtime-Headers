
@interface BYSettingsManagerClient : NSObject {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)_connectToDaemon;
- (id)connection;
- (bool)hasStashedValuesOnDisk;
- (id)init;
- (void)setConnection:(id)arg1;

@end
