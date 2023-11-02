
@interface CLKComplicationTemplateGraphicRectangularTextMeteredGauge : CLKComplicationTemplate {
    CLKTextProvider * _body1TextProvider;
    CLKGaugeProvider * _gaugeProvider;
    CLKFullColorImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *body1TextProvider;
@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 gaugeProvider:(id)arg4;
+ (id)templateWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 gaugeProvider:(id)arg3;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)body1TextProvider;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 body1TextProvider:(id)arg3 gaugeProvider:(id)arg4;
- (id)initWithHeaderTextProvider:(id)arg1 body1TextProvider:(id)arg2 gaugeProvider:(id)arg3;
- (void)setBody1TextProvider:(id)arg1;
- (void)setGaugeProvider:(id)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;

@end
