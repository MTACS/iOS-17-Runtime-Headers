
@interface PDSHeartbeatTracker : NSObject {
    <PDSHeartbeatTrackerDelegate> * _delegate;
    IMDispatchTimer * _heartbeatTimer;
    id /* block */  _kvStoreBlock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _scheduledActivity;
    IDSServerBag * _serverBag;
}

@property (nonatomic) <PDSHeartbeatTrackerDelegate> *delegate;
@property (nonatomic, retain) IMDispatchTimer *heartbeatTimer;
@property (nonatomic, readonly) bool isPassedTrackedHeartbeatDate;
@property (nonatomic, copy) id /* block */ kvStoreBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool scheduledActivity;
@property (nonatomic, retain) IDSServerBag *serverBag;
@property (nonatomic, readonly) NSDate *trackedHeartbeatDate;

- (void).cxx_destruct;
- (void)_handleHeartbeatFired;
- (void)_markNextCheckpointTimeWithTTL:(double)arg1;
- (void)_setupMaintenanceActivity;
- (id)delegate;
- (id)heartbeatTimer;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 kvStoreBlock:(id /* block */)arg3 serverBag:(id)arg4;
- (bool)isPassedTrackedHeartbeatDate;
- (id /* block */)kvStoreBlock;
- (void)noteShouldNotTrackHeartbeat;
- (void)noteShouldTrackHeartbeat;
- (void)noteUpdatedHeartbeatTTL:(double)arg1;
- (id)queue;
- (bool)scheduledActivity;
- (id)serverBag;
- (void)setDelegate:(id)arg1;
- (void)setHeartbeatTimer:(id)arg1;
- (void)setKvStoreBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setScheduledActivity:(bool)arg1;
- (void)setServerBag:(id)arg1;
- (id)trackedHeartbeatDate;

@end
