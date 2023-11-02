
@interface PCRemoteActivityClient : NSObject <NSSecureCoding, PCActivatable> {
    id /* block */  _activityDataUpdateHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _homeKitUpdateHandler;
    id /* block */  _interruptionHandler;
    id /* block */  _invalidationHandler;
    id /* block */  _mediaRemoteUpdateHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    id /* block */  _uiWillDismissHandler;
    id /* block */  _updateHandler;
    <NSXPCProxyCreating> * _xpcCnx;
}

@property (nonatomic, copy) id /* block */ activityDataUpdateHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ homeKitUpdateHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ mediaRemoteUpdateHandler;
@property (nonatomic, copy) id /* block */ uiWillDismissHandler;
@property (nonatomic, copy) id /* block */ updateHandler;
@property (nonatomic, retain) <NSXPCProxyCreating> *xpcCnx;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)_xpcEnsureStarted;
- (void)_xpcEnsureStopped;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)activityDataUpdateHandler;
- (void)dealloc;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)homeKitUpdateHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)interrupted;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id /* block */)mediaRemoteUpdateHandler;
- (void)setActivityDataUpdateHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setHomeKitUpdateHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMediaRemoteUpdateHandler:(id /* block */)arg1;
- (void)setUiWillDismissHandler:(id /* block */)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)setXpcCnx:(id)arg1;
- (void)startObservingDeviceWithIdentifier:(id)arg1;
- (void)startObservingHomeKitIdentifier:(id)arg1;
- (void)startObservingMediaRemoteIdentifier:(id)arg1;
- (void)stopObservingAllDevices;
- (void)stopObservingDeviceWithIdentifier:(id)arg1;
- (void)stopObservingHomeKitIdentifier:(id)arg1;
- (void)stopObservingMediaRemoteIdentifier:(id)arg1;
- (id /* block */)uiWillDismissHandler;
- (id /* block */)updateHandler;
- (void)updateHomeKitID:(id)arg1 mediaRemoteID:(id)arg2 withActivities:(id)arg3 disambiguationContext:(id)arg4;
- (void)updateHomeKitID:(id)arg1 withActivities:(id)arg2 disambiguationContext:(id)arg3;
- (void)updateMediaRemoteID:(id)arg1 withActivities:(id)arg2 disambiguationContext:(id)arg3;
- (id)userActivitySetFromData:(id)arg1;
- (void)userTappedCloseButton;
- (void)userTappedDisambiguationButton:(id)arg1;
- (id)xpcCnx;

@end
