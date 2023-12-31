
@interface PHALocalNotificationInterface : NSObject {
    bool  _isNotificationRegistered;
}

@property bool isNotificationRegistered;

+ (id)localNotificationInterface;

- (void)fireLocalNotificationWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isNotificationRegistered;
- (void)setIsNotificationRegistered:(bool)arg1;

@end
