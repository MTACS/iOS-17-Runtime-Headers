
@interface SURemoteNotificationController : NSObject

@property (nonatomic, readonly) unsigned long long enabledNotificationTypes;

+ (id)sharedInstance;

- (unsigned long long)enabledNotificationTypes;
- (void)handleNotificationDictionary:(id)arg1;
- (void)handleRegistrationFailureWithError:(id)arg1;
- (void)handleRegistrationSuccessWithToken:(id)arg1;
- (id)init;

@end
