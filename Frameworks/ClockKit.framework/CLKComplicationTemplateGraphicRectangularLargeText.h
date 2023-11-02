
@interface CLKComplicationTemplateGraphicRectangularLargeText : CLKComplicationTemplate {
    CLKTextProvider * _bodyTextProvider;
    CLKFullColorImageProvider * _headerImageProvider;
    CLKTextProvider * _headerTextProvider;
}

@property (nonatomic, copy) CLKTextProvider *bodyTextProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *headerImageProvider;
@property (nonatomic, copy) CLKTextProvider *headerTextProvider;

+ (id)templateWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 bodyTextProvider:(id)arg3;
+ (id)templateWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)bodyTextProvider;
- (long long)compatibleFamily;
- (id)headerImageProvider;
- (id)headerTextProvider;
- (id)initWithHeaderImageProvider:(id)arg1 headerTextProvider:(id)arg2 bodyTextProvider:(id)arg3;
- (id)initWithHeaderTextProvider:(id)arg1 bodyTextProvider:(id)arg2;
- (void)setBodyTextProvider:(id)arg1;
- (void)setHeaderImageProvider:(id)arg1;
- (void)setHeaderTextProvider:(id)arg1;

@end
