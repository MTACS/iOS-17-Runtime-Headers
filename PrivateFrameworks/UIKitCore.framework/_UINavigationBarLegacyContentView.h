
@interface _UINavigationBarLegacyContentView : UIView {
    _UINavigationBarVisualProviderLegacyIOS * _visualProvider;
}

@property (nonatomic) _UINavigationBarVisualProviderLegacyIOS *visualProvider;

- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)layoutSubviews;
- (void)setVisualProvider:(id)arg1;
- (id)visualProvider;

@end
