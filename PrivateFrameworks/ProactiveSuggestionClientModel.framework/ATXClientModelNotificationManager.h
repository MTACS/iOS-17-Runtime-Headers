
@interface ATXClientModelNotificationManager : NSObject <ATXClientModelNotificationManagerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)notificationHandleForClientModel:(id)arg1;
- (void)updateNotificationId:(id)arg1 clientModel:(id)arg2;

@end
