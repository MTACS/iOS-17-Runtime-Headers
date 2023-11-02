
@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate {
    CLKTextProvider * _line1TextProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic, copy) CLKTextProvider *line1TextProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

+ (id)templateWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)initWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;
- (id)line1TextProvider;
- (id)line2TextProvider;
- (void)setLine1TextProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
