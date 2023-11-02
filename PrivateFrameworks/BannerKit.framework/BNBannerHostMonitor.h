
@interface BNBannerHostMonitor : NSObject {
    bool  _active;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _machName;
}

@property (getter=isActive, setter=_setActive:, nonatomic) bool active;
@property (getter=_connection, setter=_setConnection:, nonatomic, retain) BSServiceConnection *connection;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_activeConnection;
- (id)_connection;
- (void)_invalidateConnection;
- (void)_setActive:(bool)arg1;
- (void)_setConnection:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)initWithMachName:(id)arg1;
- (bool)isActive;

@end
