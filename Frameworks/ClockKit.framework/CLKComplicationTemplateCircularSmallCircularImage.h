
@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;

+ (void)_imageSDKSize:(struct CGSize { double x1; double x2; }*)arg1 deviceSize:(struct CGSize { double x1; double x2; }*)arg2 forSDKVersion:(long long)arg3;
+ (id)templateWithImageProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1;
- (void)setImageProvider:(id)arg1;

@end
