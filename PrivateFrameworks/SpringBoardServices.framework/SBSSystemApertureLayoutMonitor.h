
@interface SBSSystemApertureLayoutMonitor : NSObject <BSInvalidatable> {
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSArray * _frames;
    bool  _isValid;
    NSPointerArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)removeObserver:(id)arg1;
- (oneway void)systemApertureLayoutDidChange:(id)arg1;

@end
