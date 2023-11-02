
@protocol PXMutableMemoryViewModel <NSObject>

@required

- (bool)isHighlighted;
- (<PXDisplayAsset> *)keyAsset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (NSString *)localizedDateText;
- (NSString *)localizedTitle;
- (void)setIsHighlighted:(bool)arg1;
- (void)setKeyAsset:(id <PXDisplayAsset>)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLocalizedDateText:(NSString *)arg1;
- (void)setLocalizedTitle:(NSString *)arg1;
- (void)setSpecSet:(long long)arg1;
- (void)setVariant:(long long)arg1;
- (long long)specSet;
- (long long)variant;

@end
