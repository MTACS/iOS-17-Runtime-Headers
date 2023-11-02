
@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate {
    CLKTextProvider * _innerTextProvider;
    CLKTextProvider * _outerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *innerTextProvider;
@property (nonatomic, copy) CLKTextProvider *outerTextProvider;

+ (id)templateWithInnerTextProvider:(id)arg1 outerTextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)initWithInnerTextProvider:(id)arg1 outerTextProvider:(id)arg2;
- (id)innerTextProvider;
- (id)outerTextProvider;
- (void)setInnerTextProvider:(id)arg1;
- (void)setOuterTextProvider:(id)arg1;

@end
