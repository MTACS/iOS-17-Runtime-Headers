
@interface VCBTNotificationMonitor : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _btNotificationHandlerLock;
    NSMutableArray * _handlerArray;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)processBTNotification:(struct { char *x1; unsigned long long x2; }*)arg1;
- (int)registerBTNotificationHandler:(id /* block */)arg1;
- (void)registerDarwinNotification:(id)arg1;
- (void)registerForBluetoothImmediateNotifications;
- (void)setupBTEventHandler;
- (void)unregisterAllBTNotificationHandlers;
- (void)unregisterBTNotificationHandler:(int)arg1;
- (void)unregisterBluetoothImmediateNotifications;
- (void)unregisterDarwinNotification:(id)arg1;

@end
