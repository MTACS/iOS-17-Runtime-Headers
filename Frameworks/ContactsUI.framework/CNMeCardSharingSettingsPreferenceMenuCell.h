
@interface CNMeCardSharingSettingsPreferenceMenuCell : UITableViewCell {
    <CNMeCardSharingSettingsPreferenceMenuCellDelegate> * _delegate;
    UIButton * _menuButton;
    UIButton * _popupMenuButton;
}

@property (nonatomic) <CNMeCardSharingSettingsPreferenceMenuCellDelegate> *delegate;
@property (nonatomic, retain) UIButton *menuButton;
@property (nonatomic, retain) UIButton *popupMenuButton;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)alwaysAskMenuTitle;
- (void)configureAccessoryView;
- (id)contactsOnlyMenuTitle;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMenuButton;
- (void)layoutSubviews;
- (id)menu;
- (id)menuButton;
- (id)popupMenuButton;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMenuButton:(id)arg1;
- (void)setPopupMenuButton:(id)arg1;
- (void)setSharingAudience:(unsigned long long)arg1;
- (id)titleForSharingAudience:(unsigned long long)arg1;
- (void)updateContentConfigurationWithSecondaryText:(id)arg1;
- (void)updateMenuButtonStatesWithSharingAudience:(unsigned long long)arg1;

@end
