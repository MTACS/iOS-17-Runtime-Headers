
@interface REMListCalDAVNotificationContextChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
}

@property (nonatomic, readonly) NSArray *calDAVNotifications;
@property (nonatomic, retain) REMListChangeItem *listChangeItem;

- (void).cxx_destruct;
- (void)_addCalDAVNotification:(id)arg1;
- (id)addCalDAVNotificationWithUUIDString:(id)arg1 hostURL:(id)arg2 externalIdentifier:(id)arg3 externalModificationTag:(id)arg4;
- (id)calDAVNotifications;
- (void)clearCalDAVNotifications;
- (id)initWithListChangeItem:(id)arg1;
- (id)listChangeItem;
- (void)removeCalDAVNotication:(id)arg1;
- (void)setListChangeItem:(id)arg1;
- (void)updateCalDAVNotification:(id)arg1 withBlock:(id /* block */)arg2;

@end
