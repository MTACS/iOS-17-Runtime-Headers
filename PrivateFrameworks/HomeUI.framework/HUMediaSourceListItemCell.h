
@interface HUMediaSourceListItemCell : HUTitleDescriptionCell {
    UIImageView * _serviceIconView;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UIImageView *serviceIconView;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (id)serviceIconView;
- (void)setServiceIconView:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (void)updateUIWithAnimation:(bool)arg1;

@end
