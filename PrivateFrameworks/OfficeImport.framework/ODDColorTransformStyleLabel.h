
@interface ODDColorTransformStyleLabel : NSObject {
    ODDFillColorList * mEffectColors;
    ODDFillColorList * mFillColors;
    ODDFillColorList * mLineColors;
    ODDFillColorList * mTextEffectColors;
    ODDFillColorList * mTextFillColors;
    ODDFillColorList * mTextLineColors;
}

- (void).cxx_destruct;
- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;
- (id)effectColors;
- (id)fillColors;
- (id)lineColors;
- (void)setEffectColors:(id)arg1;
- (void)setFillColors:(id)arg1;
- (void)setLineColors:(id)arg1;
- (void)setTextEffectColors:(id)arg1;
- (void)setTextFillColors:(id)arg1;
- (void)setTextLineColors:(id)arg1;
- (id)textEffectColors;
- (id)textFillColors;
- (id)textLineColors;

@end
