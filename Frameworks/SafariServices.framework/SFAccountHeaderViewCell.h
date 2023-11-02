
@interface SFAccountHeaderViewCell : UITableViewCell <UITextFieldDelegate> {
    SFAccountIconSharingBadgeImageCoordinator * _badgeImageCoordinator;
    NSString * _customTitle;
    <SFAccountHeaderViewCellDelegate> * _delegate;
    NSString * _highLevelDomain;
    UIImageView * _iconImageView;
    UIImageView * _keyIconImageView;
    UIStackView * _labelStackView;
    UILabel * _lastModifiedDateLabel;
    UIView * _monogramBackgroundView;
    UILabel * _monogramLabel;
    WBSSavedAccount * _savedAccount;
    UITextField * _titleTextField;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAccountHeaderViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WBSSavedAccount *savedAccount;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *titleTextField;

- (void).cxx_destruct;
- (void)_hideMonogramIcon;
- (void)_showMonogramIconWithBackgroundColor:(id)arg1;
- (void)_textFieldChanged:(id)arg1;
- (void)_updateSharedAccountBadgeImageViewIfNecessary;
- (void)commitCustomTitle;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)savedAccount;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHeaderTitleForHighLevelDomain:(id)arg1 customTitle:(id)arg2;
- (void)setIcon:(id)arg1;
- (void)setLastModifiedDateString:(id)arg1;
- (void)setMonogramBackgroundColor:(id)arg1;
- (void)setSavedAccount:(id)arg1;
- (void)setTitleTextField:(id)arg1;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleTextField;

@end
