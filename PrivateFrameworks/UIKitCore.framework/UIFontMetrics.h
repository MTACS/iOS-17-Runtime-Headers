
@interface UIFontMetrics : NSObject {
    NSString * _textStyle;
}

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)defaultMetrics;
+ (id)metricsForTextStyle:(id)arg1;
+ (double)scaledValueForValue:(double)arg1 withTextStyle:(id)arg2 bodyLeading:(double)arg3 compatibleWithTraitCollection:(id)arg4;

- (void).cxx_destruct;
- (id)ib_scaledFontForFont:(id)arg1;
- (id)ib_scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;
- (id)init;
- (id)initForTextStyle:(id)arg1;
- (id)scaledFontForFont:(id)arg1;
- (id)scaledFontForFont:(id)arg1 compatibleWithTraitCollection:(id)arg2;
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2;
- (id)scaledFontForFont:(id)arg1 maximumPointSize:(double)arg2 compatibleWithTraitCollection:(id)arg3;
- (double)scaledValueForValue:(double)arg1;
- (double)scaledValueForValue:(double)arg1 compatibleWithTraitCollection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hk_scaledDirectionalEdgeInsetsForDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hk_scaledDirectionalEdgeInsetsForDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 compatibleWithTraitCollection:(id)arg2;

@end
