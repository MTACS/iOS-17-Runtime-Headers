
@interface NTKVictoryTimeLabel : NTKDigitalTimeLabel {
    double  _additionalPaddingInsets;
    NSHashTable * _labels;
    double  _outlineAlpha;
    UIColor * _outlineColor;
}

@property (nonatomic) double additionalPaddingInsets;
@property (nonatomic, retain) NSHashTable *labels;
@property (nonatomic) double outlineAlpha;
@property (nonatomic, retain) UIColor *outlineColor;

- (void).cxx_destruct;
- (id)_newUnderlyingLabel:(bool)arg1;
- (double)additionalPaddingInsets;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2 additionalPaddingInsets:(double)arg3;
- (id)labels;
- (double)outlineAlpha;
- (id)outlineColor;
- (void)setAdditionalPaddingInsets:(double)arg1;
- (void)setLabels:(id)arg1;
- (void)setOutlineAlpha:(double)arg1;
- (void)setOutlineColor:(id)arg1;

@end
