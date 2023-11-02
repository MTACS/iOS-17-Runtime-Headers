
@interface STSettingsServiceClient : NSObject {
    NSXPCConnection * _connection;
}

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (bool)processSettingsChangesSinceHistoryToken:(id)arg1 error:(id*)arg2;
- (void)setConnection:(id)arg1;

@end
