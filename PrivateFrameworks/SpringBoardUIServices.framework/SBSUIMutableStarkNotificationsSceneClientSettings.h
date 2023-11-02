
@interface SBSUIMutableStarkNotificationsSceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingNotification, nonatomic) bool displayingNotification;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldBorrowScreen;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isDisplayingNotification;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)setDisplayingNotification:(bool)arg1;
- (void)setShouldBorrowScreen:(bool)arg1;
- (bool)shouldBorrowScreen;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
