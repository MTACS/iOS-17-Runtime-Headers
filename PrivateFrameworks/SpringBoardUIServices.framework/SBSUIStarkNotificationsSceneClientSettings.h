
@interface SBSUIStarkNotificationsSceneClientSettings : UIApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingNotification, nonatomic, readonly) bool displayingNotification;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldBorrowScreen;
@property (readonly) Class superclass;

- (bool)isDisplayingNotification;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)shouldBorrowScreen;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
