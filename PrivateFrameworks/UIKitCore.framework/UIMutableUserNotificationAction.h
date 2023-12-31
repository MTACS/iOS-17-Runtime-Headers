
@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (nonatomic) unsigned long long activationMode;
@property (getter=isAuthenticationRequired, nonatomic) bool authenticationRequired;
@property (nonatomic) unsigned long long behavior;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic, copy) NSString *title;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
