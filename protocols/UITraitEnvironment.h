
@protocol UITraitEnvironment <NSObject>

@required

- (UITraitCollection *)traitCollection;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;

@end
