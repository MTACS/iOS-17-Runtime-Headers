
@interface CMIndoorOutdoorManagerInternal : NSObject {
    void * _connection;
    <CMIndoorOutdoorDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    CMIndoorOutdoorManager * _sender;
    bool  _startedUpdates;
}

- (void)_lastKnownIndoorOutdoorStateWithHandler:(id /* block */)arg1;
- (void)_startIndoorOutdoorUpdates;
- (void)_stopIndoorOutdoorUpdates;
- (void)_teardown;
- (void)dealloc;
- (id)init;

@end
