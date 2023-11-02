
@interface HUMediaServiceTitleValueCell : HUTitleValueCell {
    NSArray * _constraints;
    bool  _iconImageLoadingInProgress;
    UIImageView * _serviceIconView;
}

@property (nonatomic, retain) NSArray *constraints;
@property bool iconImageLoadingInProgress;
@property (nonatomic, retain) UIImageView *serviceIconView;

- (void).cxx_destruct;
- (void)_loadServiceIconImage;
- (void)_updateContentMetrics;
- (id)constraints;
- (bool)iconImageLoadingInProgress;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)serviceIconView;
- (void)setConstraints:(id)arg1;
- (void)setIconImageLoadingInProgress:(bool)arg1;
- (void)setServiceIconView:(id)arg1;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
