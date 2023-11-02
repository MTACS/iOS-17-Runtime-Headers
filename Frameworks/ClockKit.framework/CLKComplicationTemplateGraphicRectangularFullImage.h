
@interface CLKComplicationTemplateGraphicRectangularFullImage : CLKComplicationTemplate {
    CLKFullColorImageProvider * _imageProvider;
}

@property (nonatomic, copy) CLKFullColorImageProvider *imageProvider;

+ (id)templateWithImageProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;

@end
