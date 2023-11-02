
@interface CLKComplicationTemplateBattery : CLKComplicationTemplate {
    bool  _charging;
    long long  _family;
    double  _level;
    CLKTextProvider * _textProvider;
}

@property (nonatomic) bool charging;
@property (nonatomic) double level;
@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithFamily:(long long)arg1 textProvider:(id)arg2 level:(double)arg3 charging:(bool)arg4;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (bool)charging;
- (long long)compatibleFamily;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithFamily:(long long)arg1 textProvider:(id)arg2 level:(double)arg3 charging:(bool)arg4;
- (double)level;
- (void)setCharging:(bool)arg1;
- (void)setLevel:(double)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
