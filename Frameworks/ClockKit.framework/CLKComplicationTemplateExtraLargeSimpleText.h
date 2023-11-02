
@interface CLKComplicationTemplateExtraLargeSimpleText : CLKComplicationTemplate {
    long long  _maxDynamicFontSize;
    CLKTextProvider * _textProvider;
}

@property (nonatomic) long long maxDynamicFontSize;
@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)init;
- (id)initWithTextProvider:(id)arg1;
- (long long)maxDynamicFontSize;
- (void)setMaxDynamicFontSize:(long long)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
