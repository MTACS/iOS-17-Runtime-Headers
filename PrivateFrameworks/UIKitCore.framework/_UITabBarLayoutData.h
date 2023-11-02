
@interface _UITabBarLayoutData : _UIBarAppearanceData {
    long long  _itemPositioning;
    double  _itemSpacing;
    double  _itemWidth;
    UIImage * _selectionIndicatorImage;
    UIColor * _selectionIndicatorTintColor;
}

@property (nonatomic) long long itemPositioning;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemWidth;
@property (nonatomic, retain) UIImage *selectionIndicatorImage;
@property (nonatomic, copy) UIColor *selectionIndicatorTintColor;

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;
+ (id)standardLayoutData;

- (void).cxx_destruct;
- (bool)checkEqualTo:(id)arg1;
- (void)describeInto:(id)arg1;
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;
- (long long)hashInto:(long long)arg1;
- (long long)itemPositioning;
- (double)itemSpacing;
- (double)itemWidth;
- (long long)positioningForTraitCollection:(id)arg1;
- (id)replicate;
- (id)selectionIndicatorImage;
- (id)selectionIndicatorTintColor;
- (void)setItemPositioning:(long long)arg1;
- (void)setItemSpacing:(double)arg1;
- (void)setItemWidth:(double)arg1;
- (void)setSelectionIndicatorImage:(id)arg1;
- (void)setSelectionIndicatorTintColor:(id)arg1;

@end
