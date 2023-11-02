
@interface PCLockscreenControlsObserver : NSObject <NSSecureCoding> {
    bool  _activateCalled;
    id /* block */  _deviceLost;
    id /* block */  _deviceUpdated;
    NSMutableDictionary * _devices;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
    NSString * _processName;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) id /* block */ deviceLost;
@property (nonatomic, copy) id /* block */ deviceUpdated;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *processName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_interrupted;
- (void)_invalidateWithError:(id)arg1;
- (void)_xpcEnsureStarted;
- (void)_xpcEnsureStopped;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id /* block */)deviceLost;
- (void)deviceLost:(id)arg1;
- (id /* block */)deviceUpdated;
- (void)deviceUpdated:(id)arg1;
- (void)didSwitchRouteToDevice:(id)arg1;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)knownDevices;
- (id)processName;
- (void)setDeviceLost:(id /* block */)arg1;
- (void)setDeviceUpdated:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setProcessName:(id)arg1;

@end
