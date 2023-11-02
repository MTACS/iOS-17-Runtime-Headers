
@interface PXComposeRecipientTableViewCell : UITableViewCell <PXChangeObserver> {
    UIImageView * _accessoryImageView;
    UILabel * _addressLabel;
    UIView * _avatarView;
    PXComposeRecipientTableCellModel * _cellModel;
    UIView * _contactAvatarView;
    CNAvatarViewController * _contactAvatarViewController;
    PXRoundImageView * _customAvatarImageView;
    UILabel * _localizedNameLabel;
    UIView * _popoverSourceView;
}

@property (nonatomic, readonly) PXComposeRecipientTableCellModel *cellModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *popoverSourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_textColor;
- (void)_updateAccessoryImageView;
- (void)_updateAddressLabel;
- (void)_updateAvatarView;
- (void)_updateLocalizedNameLabel;
- (id)cellModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)popoverSourceView;
- (void)setPopoverSourceView:(id)arg1;

@end
