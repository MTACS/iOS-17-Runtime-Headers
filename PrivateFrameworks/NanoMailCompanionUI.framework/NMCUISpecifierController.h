
@interface NMCUISpecifierController : NSObject {
    NMCUICloudNotificationAccountDataSource * _dataSource;
    bool  _isTinker;
    PSListController * _listController;
}

@property (nonatomic, retain) NMCUICloudNotificationAccountDataSource *dataSource;
@property (nonatomic) bool isTinker;
@property (nonatomic) PSListController *listController;

+ (id)settingSpecifierWithTarget:(id)arg1 set:(SEL)arg2 get:(SEL)arg3;
+ (id)titleSettingSpecifier;

- (void).cxx_destruct;
- (void)_accountSpecifierTapped:(id)arg1;
- (id)_cloudNotificationsEnabled:(id)arg1;
- (void)_setCloudNotificationsEnabled:(id)arg1 withSpecifier:(id)arg2;
- (id)dataSource;
- (id)groupSpecifierForTinker:(bool)arg1;
- (bool)hasCloudNotificationAccounts;
- (id)initWithListController:(id)arg1 dataSource:(id)arg2 isTinker:(bool)arg3;
- (bool)isTinker;
- (id)listController;
- (void)setDataSource:(id)arg1;
- (void)setIsTinker:(bool)arg1;
- (void)setListController:(id)arg1;
- (id)specifierForAccount:(id)arg1 onTap:(SEL)arg2;
- (id)specifiers;

@end
