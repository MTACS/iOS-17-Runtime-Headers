
@interface CALNNotificationStorageWrapper : NSObject <CALNNotificationStorage> {
    <CALNNotificationStorage> * _wrappedStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) <CALNNotificationStorage> *wrappedStorage;

- (void).cxx_destruct;
- (void)addNotificationRecord:(id)arg1;
- (void)addNotificationRecords:(id)arg1;
- (id)initWithWrappedStorage:(id)arg1;
- (id)notificationRecords;
- (void)removeAllNotificationRecords;
- (void)removeNotificationRecordsPassingTest:(id /* block */)arg1;
- (void)setWrappedStorage:(id)arg1;
- (id)wrappedStorage;

@end
