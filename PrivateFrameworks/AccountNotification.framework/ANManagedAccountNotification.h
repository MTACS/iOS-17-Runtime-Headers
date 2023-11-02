
@interface ANManagedAccountNotification : NSManagedObject

@property (nonatomic, retain) NSString *accountTypeID;
@property (nonatomic, retain) ANManagedNotificationAction *activateAction;
@property (nonatomic, retain) NSString *activateButtonTitle;
@property (nonatomic, retain) NSString *callbackMachServiceName;
@property (nonatomic, retain) ANManagedNotificationAction *clearAction;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) ANManagedNotificationAction *dismissAction;
@property (nonatomic, retain) NSString *dismissButtonTitle;
@property (nonatomic, retain) NSString *eventID;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) id userInfo;

- (void)takeValuesFromAccountNotification:(id)arg1;

@end
