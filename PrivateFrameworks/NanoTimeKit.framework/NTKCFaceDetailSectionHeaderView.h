
@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {
    UIListContentConfiguration * _configuration;
    UILabel * _detailLabel;
    NTKCSeparatorView * _separator;
}

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

+ (double)headerHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (id)_traitCollectionAdjustedIfNeeded;
- (void)_updateConfig;
- (id)groupName;
- (id)init;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setGroupName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
