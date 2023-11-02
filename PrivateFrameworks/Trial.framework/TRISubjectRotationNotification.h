
@interface TRISubjectRotationNotification : NSObject

+ (void)deregisterUpdateWithToken:(id)arg1;
+ (bool)notifySubjectRotation;
+ (id)registerSubjectRotationWithQueue:(id)arg1 usingBlock:(id /* block */)arg2;

@end
