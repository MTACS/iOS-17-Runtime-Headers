
@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject <CALNTriggeredEventNotificationDataStorage> {
    NSMutableDictionary * _notificationDataMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *notificationDataMap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (id)notificationData;
- (id)notificationDataMap;
- (id)notificationDataWithIdentifier:(id)arg1;
- (void)removeNotificationData;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (id)workQueue;

@end
