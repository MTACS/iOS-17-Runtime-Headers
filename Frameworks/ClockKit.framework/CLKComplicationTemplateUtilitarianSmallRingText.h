
@interface CLKComplicationTemplateUtilitarianSmallRingText : CLKComplicationTemplate {
    float  _fillFraction;
    long long  _ringStyle;
    CLKTextProvider * _textProvider;
}

@property (nonatomic) float fillFraction;
@property (nonatomic) long long ringStyle;
@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (float)fillFraction;
- (id)initWithTextProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3;
- (long long)ringStyle;
- (void)setFillFraction:(float)arg1;
- (void)setRingStyle:(long long)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
