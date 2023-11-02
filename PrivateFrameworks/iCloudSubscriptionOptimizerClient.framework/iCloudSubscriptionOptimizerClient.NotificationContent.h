
@interface iCloudSubscriptionOptimizerClient.NotificationContent : ISONotificationContent {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  context;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)init;
- (bool)shouldCallMlDaemon;

@end
