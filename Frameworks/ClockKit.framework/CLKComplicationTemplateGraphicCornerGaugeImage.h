
@interface CLKComplicationTemplateGraphicCornerGaugeImage : CLKComplicationTemplate {
    CLKGaugeProvider * _gaugeProvider;
    CLKFullColorImageProvider * _imageProvider;
    CLKTextProvider * _leadingTextProvider;
    CLKTextProvider * _trailingTextProvider;
}

@property (nonatomic, copy) CLKGaugeProvider *gaugeProvider;
@property (nonatomic, copy) CLKFullColorImageProvider *imageProvider;
@property (nonatomic, copy) CLKTextProvider *leadingTextProvider;
@property (nonatomic, copy) CLKTextProvider *trailingTextProvider;

+ (id)templateWithGaugeProvider:(id)arg1 imageProvider:(id)arg2;
+ (id)templateWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 imageProvider:(id)arg4;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)gaugeProvider;
- (id)imageProvider;
- (id)initWithGaugeProvider:(id)arg1 imageProvider:(id)arg2;
- (id)initWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 imageProvider:(id)arg4;
- (id)leadingTextProvider;
- (void)setGaugeProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setLeadingTextProvider:(id)arg1;
- (void)setTrailingTextProvider:(id)arg1;
- (id)trailingTextProvider;

@end
