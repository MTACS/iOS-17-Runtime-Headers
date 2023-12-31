
@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
    float  mFontScalePercent;
    float  mLineSpacingReductionPercent;
}

- (id)description;
- (float)fontScalePercent;
- (unsigned long long)hash;
- (id)initWithFontScalePercent:(float)arg1 lineSpacingReductionPercent:(float)arg2;
- (bool)isEqual:(id)arg1;
- (float)lineSpacingReductionPercent;

@end
