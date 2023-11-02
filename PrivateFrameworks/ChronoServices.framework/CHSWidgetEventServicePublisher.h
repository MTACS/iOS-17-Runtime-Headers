
@interface CHSWidgetEventServicePublisher : NSObject {
    bool  _active;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSString * _machServiceName;
}

@property (getter=isActive, nonatomic, readonly) bool active;

- (void).cxx_destruct;
- (id)_activeConnection;
- (void)_invalidateConnection;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)initWithMachServiceName:(id)arg1;
- (bool)isActive;
- (void)publishOpenEventWithURL:(id)arg1;
- (void)publishOpenEventWithUserActivity:(id)arg1;

@end
