
@interface CKAppManagerAppTableViewCell : UITableViewCell {
    UISwitch * _appToggle;
    NSString * _currentPluginIdentifierForIconLoading;
    <CKAppManagerAppTableViewCellDelegate> * _delegate;
}

@property (nonatomic, retain) UISwitch *appToggle;
@property (nonatomic, copy) NSString *currentPluginIdentifierForIconLoading;
@property (nonatomic) <CKAppManagerAppTableViewCellDelegate> *delegate;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateConfigurationWithImage:(id)arg1 text:(id)arg2;
- (id)appToggle;
- (void)appToggleTapped:(id)arg1;
- (void)configureCellFromInitializer;
- (id)currentPluginIdentifierForIconLoading;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)prepareForReuse;
- (void)setAppToggle:(id)arg1;
- (void)setCurrentPluginIdentifierForIconLoading:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setToggleVisible:(bool)arg1 editable:(bool)arg2 isOn:(bool)arg3 isSelectable:(bool)arg4;
- (void)updateCellWithPluginInfo:(id)arg1;

@end
