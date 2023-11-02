
@protocol _UIContentViewConfiguration <NSObject, NSCopying>

@required

- (UIView<_UIContentView> *)createContentView;
- (id)updatedConfigurationForState:(unsigned long long)arg1;
- (id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(UITraitCollection *)arg2;

@optional

- (void)applyToContentView:(UIView *)arg1;

@end
