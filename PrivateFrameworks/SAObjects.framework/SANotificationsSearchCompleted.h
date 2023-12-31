
@interface SANotificationsSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *notifications;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)notificationsSearchCompleted;
+ (id)notificationsSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)notifications;
- (bool)requiresResponse;
- (void)setNotifications:(id)arg1;

@end
