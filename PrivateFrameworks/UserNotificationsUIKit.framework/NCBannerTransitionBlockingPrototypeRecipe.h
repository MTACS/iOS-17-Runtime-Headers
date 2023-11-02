
@interface NCBannerTransitionBlockingPrototypeRecipe : NSObject {
    NSMutableArray * _assertions;
    <NCNotificationAlertDestinationPrototyping> * _notificationAlertDestination;
}

@property (nonatomic, readonly) <NCNotificationAlertDestinationPrototyping> *notificationAlertDestination;

- (void).cxx_destruct;
- (void)_popTopAssertion;
- (void)_pushNewAssertion;
- (id)initWithNotificationAlertDestination:(id)arg1;
- (id)notificationAlertDestination;

@end
