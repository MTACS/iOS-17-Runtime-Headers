
@interface DNDEventBehaviorResolutionService : NSObject {
    NSString * _clientIdentifier;
}

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)arg1;
- (id)resolveBehaviorForEventDetails:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

- (id)nc_behaviorForNotificationRequest:(id)arg1;
- (unsigned long long)nc_dndClientEventTypeFromNotificationRequestType:(id)arg1;
- (bool)nc_shouldSuppressNotificationRequest:(id)arg1;

@end
