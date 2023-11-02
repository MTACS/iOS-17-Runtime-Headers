
@interface WMTableCellStyle : WMStyle {
    double  mLeftPadding;
    double  mRightPadding;
}

+ (id)dominantColorOf:(id)arg1;
+ (float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3;
+ (id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2;

- (void)addTableCellProperties:(id)arg1;
- (void)addTableCellStyleProperties:(id)arg1;
- (id)initWithTableCellProperties:(id)arg1;
- (double)leftPadding;
- (double)rightPadding;

@end
