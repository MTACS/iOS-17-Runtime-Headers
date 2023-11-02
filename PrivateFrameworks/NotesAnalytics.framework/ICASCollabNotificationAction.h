
@interface ICASCollabNotificationAction : NSObject <AADataType> {
    long long  _collabNotificationAction;
}

@property (nonatomic, readonly) long long collabNotificationAction;

- (long long)collabNotificationAction;
- (id)initWithCollabNotificationAction:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
