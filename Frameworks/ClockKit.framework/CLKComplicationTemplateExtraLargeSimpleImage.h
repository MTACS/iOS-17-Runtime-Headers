
@interface CLKComplicationTemplateExtraLargeSimpleImage : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;

@end
