
@interface MRNotificationMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *notification;
@property (nonatomic, readonly) MRPlayerPath *playerPath;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (id)initWithNotification:(id)arg1;
- (id)notification;
- (id)playerPath;
- (unsigned long long)type;
- (id)userInfo;

@end
