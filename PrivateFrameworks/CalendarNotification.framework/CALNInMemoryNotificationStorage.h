
@interface CALNInMemoryNotificationStorage : NSObject <CALNNotificationStorage> {
    NSMutableDictionary * _recordMap;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *recordMap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_addNotificationRecord:(id)arg1;
- (id)_notificationRecords;
- (void)_removeNotificationRecordsPassingTest:(id /* block */)arg1;
- (void)addNotificationRecord:(id)arg1;
- (void)addNotificationRecords:(id)arg1;
- (id)init;
- (id)notificationRecords;
- (id)recordMap;
- (void)removeAllNotificationRecords;
- (void)removeNotificationRecordsPassingTest:(id /* block */)arg1;
- (id)workQueue;

@end
