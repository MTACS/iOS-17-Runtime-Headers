
@interface RMXPCNotifications : NSObject {
    NSObject<OS_dispatch_queue> * _modificationQueue;
    NSMutableDictionary * _notificationObservers;
    NSMutableSet * _pendingNotifications;
    bool  _registered;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *modificationQueue;
@property (nonatomic, retain) NSMutableDictionary *notificationObservers;
@property (nonatomic, retain) NSMutableSet *pendingNotifications;
@property (nonatomic) bool registered;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (void)_addXPCEvent:(id)arg1;
- (void)_didReceiveNotificationForStream:(id)arg1 notificationName:(id)arg2;
- (void)_removeXPCEvent:(id)arg1;
- (void)_setupEventStreamHandlerForStream:(id)arg1;
- (void)_waitForQueue:(id /* block */)arg1;
- (void)addObserverForEvent:(id)arg1 observer:(id)arg2;
- (bool)hasObserverForEvent:(id)arg1;
- (id)initPrivate;
- (id)modificationQueue;
- (id)notificationObservers;
- (id)pendingNotifications;
- (void)registerForEvents:(id)arg1;
- (bool)registered;
- (void)removeObserverForEvent:(id)arg1;
- (void)setModificationQueue:(id)arg1;
- (void)setNotificationObservers:(id)arg1;
- (void)setPendingNotifications:(id)arg1;
- (void)setRegistered:(bool)arg1;

@end
