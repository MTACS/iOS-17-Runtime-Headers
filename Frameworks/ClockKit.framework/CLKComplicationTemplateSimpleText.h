
@interface CLKComplicationTemplateSimpleText : CLKComplicationTemplate {
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)initWithTextProvider:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
