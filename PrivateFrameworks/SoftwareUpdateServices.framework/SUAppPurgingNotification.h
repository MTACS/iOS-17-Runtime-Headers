
@interface SUAppPurgingNotification : NSObject <SUAppPurgingNotification>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)postAppPurgingNotificationWithCompletion:(id /* block */)arg1;

@end
