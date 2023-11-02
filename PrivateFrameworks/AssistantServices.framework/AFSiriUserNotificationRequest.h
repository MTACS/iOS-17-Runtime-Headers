
@interface AFSiriUserNotificationRequest : NSObject <AFSiriExternalRequest> {
    UNNotification * _notification;
    long long  _platform;
    NSString * _sourceAppId;
}

+ (bool)canBeHandled;
+ (bool)supportedForApplicationWithBundleId:(id)arg1;
+ (bool)supportedOnPlatform;

- (void).cxx_destruct;
- (void)deactivateRequestForReason:(long long)arg1 completion:(id /* block */)arg2;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2;
- (id)initWithUserNotification:(id)arg1 sourceAppId:(id)arg2 platform:(long long)arg3;
- (void)performRequestWithCompletion:(id /* block */)arg1;
- (void)withdrawalRequestWithCompletion:(id /* block */)arg1;

@end
