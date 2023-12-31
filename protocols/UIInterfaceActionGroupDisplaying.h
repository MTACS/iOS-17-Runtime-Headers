
@protocol UIInterfaceActionGroupDisplaying <NSObject>

@required

- (UIInterfaceActionVisualStyle *)defaultVisualStyleForTraitCollection:(UITraitCollection *)arg1 presentationStyle:(long long)arg2;
- (void)reloadVisualStyle;
- (void)setVisualStyleProvider:(id <UIInterfaceActionVisualStyleProviding>)arg1;
- (UIInterfaceActionVisualStyle *)visualStyle;
- (<UIInterfaceActionVisualStyleProviding> *)visualStyleProvider;

@end
