
@protocol MTVisualStylingRequiring <NSObject>

@required

- (NSArray *)requiredVisualStyleCategories;
- (void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 forCategory:(long long)arg2;

@end
