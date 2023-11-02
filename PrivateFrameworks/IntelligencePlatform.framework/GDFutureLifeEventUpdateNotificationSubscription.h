
@interface GDFutureLifeEventUpdateNotificationSubscription : NSObject {
    GDInternalViewUpdateNotificationSubscription * _viewUpdateNotificationSubscription;
}

@property (nonatomic, retain) GDInternalViewUpdateNotificationSubscription *viewUpdateNotificationSubscription;

- (void).cxx_destruct;
- (void)cancelSubscription;
- (id)initWithSystemwideUniqueSubscriptionIdentifier:(id)arg1 targetQueue:(id)arg2 onReceiveUpdateNotificationBlock:(id /* block */)arg3;
- (void)setViewUpdateNotificationSubscription:(id)arg1;
- (id)viewUpdateNotificationSubscription;

@end
