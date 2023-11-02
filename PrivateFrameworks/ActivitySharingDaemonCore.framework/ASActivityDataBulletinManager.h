
@interface ASActivityDataBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    <ASBulletinPostingManager> * _notificationPostingManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activitySharingManagerReady:(id)arg1;
- (void)showActivityNotifications:(id)arg1 withPostingStyle:(long long)arg2;

@end
