
@interface CLKComplicationTemplateUtilitarianSmallFlat : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic, copy) CLKTextProvider *textProvider;

+ (id)templateWithTextProvider:(id)arg1;
+ (id)templateWithTextProvider:(id)arg1 imageProvider:(id)arg2;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)imageProvider;
- (id)initWithTextProvider:(id)arg1;
- (id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
