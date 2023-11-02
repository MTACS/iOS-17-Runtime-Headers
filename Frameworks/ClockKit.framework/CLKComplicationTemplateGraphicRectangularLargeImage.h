
@interface CLKComplicationTemplateGraphicRectangularLargeImage : CLKComplicationTemplate {
    CLKFullColorImageProvider * _imageProvider;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKFullColorImageProvider *imageProvider;
@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)arg1 imageProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)imageProvider;
- (id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2;
- (void)setImageProvider:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
