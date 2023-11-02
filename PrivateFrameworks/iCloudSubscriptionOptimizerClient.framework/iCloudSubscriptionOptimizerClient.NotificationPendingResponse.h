
@interface iCloudSubscriptionOptimizerClient.NotificationPendingResponse : ISONotificationPendingResponse {
    void maxDelayTsMillis;
    void responseError;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)error;
- (id)init;
- (bool)isNotificationPending;
- (id)maxDelayTimestampMillis;

@end
