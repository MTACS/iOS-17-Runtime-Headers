
@interface LPImagePresentationProperties : NSObject {
    UIColor * _backgroundColor;
    bool  _canAdjustHorizontalPaddingForFixedSize;
    long long  _filter;
    UIColor * _maskColor;
    bool  _requireFixedSize;
    long long  _scalingMode;
    bool  _shouldApplyBackground;
    long long  _verticalAlignment;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool canAdjustHorizontalPaddingForFixedSize;
@property (nonatomic) long long filter;
@property (nonatomic, retain) UIColor *maskColor;
@property (nonatomic) bool requireFixedSize;
@property (nonatomic) long long scalingMode;
@property (nonatomic) bool shouldApplyBackground;
@property (nonatomic) long long verticalAlignment;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)canAdjustHorizontalPaddingForFixedSize;
- (long long)filter;
- (id)init;
- (id)maskColor;
- (bool)requireFixedSize;
- (long long)scalingMode;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanAdjustHorizontalPaddingForFixedSize:(bool)arg1;
- (void)setFilter:(long long)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setRequireFixedSize:(bool)arg1;
- (void)setScalingMode:(long long)arg1;
- (void)setShouldApplyBackground:(bool)arg1;
- (void)setVerticalAlignment:(long long)arg1;
- (bool)shouldApplyBackground;
- (long long)verticalAlignment;

@end
