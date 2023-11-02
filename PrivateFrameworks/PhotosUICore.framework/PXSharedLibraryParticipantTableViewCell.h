
@interface PXSharedLibraryParticipantTableViewCell : UITableViewCell <PXChangeObserver> {
    UILabel * _addressLabel;
    PXSharedLibraryParticipantTableCellModel * _cellModel;
    PXRoundImageView * _customAvatarImageView;
    UILabel * _localizedNameLabel;
}

@property (nonatomic, readonly) PXSharedLibraryParticipantTableCellModel *cellModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateAddressLabel;
- (void)_updateAvatarView;
- (void)_updateLocalizedNameLabel;
- (id)cellModel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
