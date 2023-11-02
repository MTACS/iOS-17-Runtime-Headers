
@interface ANManagedNotificationAction : NSManagedObject

@property (nonatomic, retain) NSNumber *isInternal;
@property (nonatomic, retain) ANManagedAccountNotification *notificationToActivate;
@property (nonatomic, retain) ANManagedAccountNotification *notificationToClear;
@property (nonatomic, retain) ANManagedAccountNotification *notificationToDismiss;
@property (nonatomic, retain) id options;
@property (nonatomic, retain) NSString *url;

- (void)takeValuesFromNotificationAction:(id)arg1;

@end
