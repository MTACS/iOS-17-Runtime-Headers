
@interface NCNotificationDigestSummaryOrderProvider : NCNotificationSummaryOrderProvider {
    ATXUserNotificationDigest * _userNotificationDigest;
}

@property (nonatomic, retain) ATXUserNotificationDigest *userNotificationDigest;

- (void).cxx_destruct;
- (void)atxLogSummaryPlatterExpandedIsUpcoming:(bool)arg1;
- (void)atxLogSummaryPlatterShownIsUpcoming:(bool)arg1;
- (id)atxUUID;
- (void)generateDigestForATXUserNotificationArrays:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setUserNotificationDigest:(id)arg1;
- (id)userNotificationDigest;

@end
