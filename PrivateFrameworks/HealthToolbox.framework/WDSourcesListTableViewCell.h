
@interface WDSourcesListTableViewCell : UITableViewCell {
    UIImageView * _iconImage;
    HKSourceDataModel * _sourceModel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *iconImage;
@property (nonatomic, retain) HKSourceDataModel *sourceModel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 fetchError:(id)arg3;
- (id)iconImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setIconImage:(id)arg1;
- (void)setSourceModel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpSubviews;
- (void)setupConstraints;
- (id)sourceModel;
- (id)titleLabel;

@end
