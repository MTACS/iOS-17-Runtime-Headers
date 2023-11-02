
@interface CoreSpotlightPreferences : NSObject {
    const char * _notification_key;
    id /* block */  _notifyHandler;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    int  _notifyToken;
    id /* block */  _notify_handler;
    NSString * _state_key;
}

@property (nonatomic) const char *notification_key;
@property (nonatomic, copy) id /* block */ notifyHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, readonly, copy) id /* block */ notify_handler;
@property (nonatomic, retain) NSString *state_key;

- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePreferencesChanged;
- (const char *)notification_key;
- (id /* block */)notifyHandler;
- (id)notifyQueue;
- (bool)notifyStart;
- (int)notifyToken;
- (id /* block */)notify_handler;
- (void)saveState:(id)arg1;
- (void)setNotification_key:(const char *)arg1;
- (void)setNotifyHandler:(id /* block */)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setState_key:(id)arg1;
- (id)state_key;

@end
