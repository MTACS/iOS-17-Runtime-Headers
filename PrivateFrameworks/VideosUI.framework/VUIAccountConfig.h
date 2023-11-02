
@interface VUIAccountConfig : NSObject {
    bool  _showAccountSettingButtonOnLibraryTab;
    bool  _showAccountSettingOnSidebar;
}

@property (nonatomic) bool showAccountSettingButtonOnLibraryTab;
@property (nonatomic) bool showAccountSettingOnSidebar;

- (id)init;
- (void)setShowAccountSettingButtonOnLibraryTab:(bool)arg1;
- (void)setShowAccountSettingOnSidebar:(bool)arg1;
- (bool)showAccountSettingButtonOnLibraryTab;
- (bool)showAccountSettingOnSidebar;

@end
