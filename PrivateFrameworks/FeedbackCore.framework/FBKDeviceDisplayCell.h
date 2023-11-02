
@interface FBKDeviceDisplayCell : UITableViewCell <FBKDiffableCell> {
    UIImageView * _deviceIcon;
    UILabel * _nameLabel;
    UILabel * _typeLabel;
    NSString * itemIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIImageView *deviceIcon;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic, retain) UILabel *nameLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *typeLabel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)configureSelected:(bool)arg1;
- (id)deviceIcon;
- (void)didTapConnectionButton:(id)arg1;
- (id)itemIdentifier;
- (void)layoutSubviews;
- (id)nameLabel;
- (void)setConnected:(bool)arg1;
- (void)setDeviceIcon:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (double)spaceFromSuperViewToLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (id)typeLabel;
- (void)updateNumberOfLines;
- (void)updateWithDevice:(id)arg1;

@end
