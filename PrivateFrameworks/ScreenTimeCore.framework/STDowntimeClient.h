
@interface STDowntimeClient : NSObject {
    NSXPCConnection * _connection;
}

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (bool)isDowntimeEnabledForUserID:(id)arg1;
- (void)toggleOnDemandDowntimeForUserID:(id)arg1 completionHandler:(id /* block */)arg2;

@end
