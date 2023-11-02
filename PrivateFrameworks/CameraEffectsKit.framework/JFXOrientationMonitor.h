
@interface JFXOrientationMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _darwinNotificationQ;
    int  _darwinNotificationToken;
    long long  _deviceInterfaceOrientation;
    long long  _deviceInterfaceOrientation_lock;
    long long  _deviceOrientation_lock;
    long long  _interfaceOrientation_lock;
    UIWindow * _keyWindow;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *darwinNotificationQ;
@property (nonatomic) int darwinNotificationToken;
@property (nonatomic) long long deviceInterfaceOrientation;
@property (nonatomic) long long deviceInterfaceOrientation_lock;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) long long deviceOrientation_lock;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long interfaceOrientation_lock;
@property (nonatomic, readonly) UIWindow *keyWindow;

+ (void)JFX_initLock;
+ (long long)deviceInterfaceOrientation;
+ (long long)deviceOrientation;
+ (void)initializeWithKeyWindow:(id)arg1;
+ (void)initializeWithViewController:(id)arg1;
+ (bool)initialized;
+ (long long)interfaceOrientation;
+ (bool)isDeviceInterfaceLandscape;
+ (id)keyWindow;

- (void).cxx_destruct;
- (void)JFX_UIApplicationDidChangeStatusBarOrientationNotification:(id)arg1;
- (void)JFX_UIApplicationDidEnterBackgroundNotification:(id)arg1;
- (void)JFX_UIApplicationWillEnterForegroundNotification:(id)arg1;
- (long long)JFX_deviceOrientation_darwinNotificationQ;
- (void)JFX_initDarwinNotification;
- (id)darwinNotificationQ;
- (int)darwinNotificationToken;
- (void)dealloc;
- (long long)deviceInterfaceOrientation;
- (long long)deviceInterfaceOrientation_lock;
- (long long)deviceOrientation;
- (long long)deviceOrientation_lock;
- (id)initWithKeyWindow:(id)arg1;
- (long long)interfaceOrientation;
- (long long)interfaceOrientation_lock;
- (id)keyWindow;
- (void)setDarwinNotificationToken:(int)arg1;
- (void)setDeviceInterfaceOrientation:(long long)arg1;
- (void)setDeviceInterfaceOrientation_lock:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setDeviceOrientation_lock:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterfaceOrientation_lock:(long long)arg1;

@end
