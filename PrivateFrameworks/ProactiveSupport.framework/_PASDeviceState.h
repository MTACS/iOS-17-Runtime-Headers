
@interface _PASDeviceState : NSObject

+ (id)currentOsBuild;
+ (bool)isClassCLocked;
+ (bool)isDeviceFormattedForProtection;
+ (bool)isUnlocked;
+ (int)lockState;
+ (void*)registerForAKSEventsNotifications:(id /* block */)arg1;
+ (id)registerForLockStateChangeNotifications:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsClassCUnlocked:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsClassCUnlockedWithQoS:(unsigned int)arg1 block:(id /* block */)arg2;
+ (void)setDefaultSystemCallbacks;
+ (void)setSystemCallbacks:(const struct _PASDeviceStateSystemCallbacks { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); }*)arg1;
+ (void)unregisterForAKSEventsNotifications:(void*)arg1;
+ (void)unregisterForLockStateChangeNotifications:(id)arg1;

@end
