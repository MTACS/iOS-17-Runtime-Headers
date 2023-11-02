
@interface TSNotificationSettings : NSObject {
    void authorizationStatus;
    void badge;
    void scheduledDeliverySetting;
    void showBanners;
    void showInNotificationCenter;
    void showOnLockScreen;
    void sound;
}

@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) bool badge;
@property (nonatomic, readonly) int scheduledDeliverySetting;
@property (nonatomic, readonly) bool showBanners;
@property (nonatomic, readonly) bool showInNotificationCenter;
@property (nonatomic, readonly) bool showOnLockScreen;
@property (nonatomic, readonly) bool sound;

- (long long)authorizationStatus;
- (bool)badge;
- (id)init;
- (id)initWithSystemSettings:(id)arg1;
- (int)scheduledDeliverySetting;
- (bool)showBanners;
- (bool)showInNotificationCenter;
- (bool)showOnLockScreen;
- (bool)sound;

@end
