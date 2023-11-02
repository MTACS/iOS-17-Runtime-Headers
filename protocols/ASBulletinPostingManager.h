
@protocol ASBulletinPostingManager <ASActivitySharingManagerReadyObserver>

@required

- (<ASBulletinPostingManagerDelegate> *)delegate;
- (void)enqueueBulletins:(NSSet *)arg1 withPostingSyle:(long long)arg2;
- (void)handleNotificationResponse:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ASUserNotificationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)postFakeBulletins:(NSSet *)arg1;
- (void)postNotificationRequest:(UNNotificationRequest *)arg1;
- (void)registerNotificationCategories:(NSSet *)arg1;
- (void)removeCompetitionNotificationsForFriendUUID:(NSUUID *)arg1;
- (void)removeNotificationWithIdentifier:(NSString *)arg1;
- (void)setDelegate:(id <ASBulletinPostingManagerDelegate>)arg1;
- (NSArray *)topicIdentifiers;

@end
