
@interface IMDAskToBuyNotificationContext : NSObject <IMDNotificationContextProtocol> {
    NSArray * _actions;
}

@property (nonatomic, copy) NSArray *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actions;
- (bool)canPopulateUserInfoForMessageBalloonBundleID:(id)arg1;
- (id)notificationCategories;
- (void)populateUserInfoForNotificationContent:(id)arg1 messageBalloonBundleID:(id)arg2 payloadData:(id)arg3;
- (void)setActions:(id)arg1;

@end
