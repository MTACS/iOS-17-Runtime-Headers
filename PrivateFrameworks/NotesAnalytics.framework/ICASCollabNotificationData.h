
@interface ICASCollabNotificationData : NSObject <AADataEventType> {
    ICASCollabNotificationAction * _collabNotificationAction;
}

@property (nonatomic, readonly) ICASCollabNotificationAction *collabNotificationAction;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collabNotificationAction;
- (id)initWithCollabNotificationAction:(id)arg1;
- (id)toDict;

@end
