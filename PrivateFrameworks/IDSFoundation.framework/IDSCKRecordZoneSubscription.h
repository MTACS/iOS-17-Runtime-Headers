
@interface IDSCKRecordZoneSubscription : IDSCKSubscription {
    IDSCKNotificationInfo * _notificationInfo;
}

@property (nonatomic, copy) IDSCKNotificationInfo *notificationInfo;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;
- (id)notificationInfo;
- (void)setNotificationInfo:(id)arg1;

@end
