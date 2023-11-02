
@interface CLKComplicationTemplateCircularSmallProgressRingImage : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
    CLKProgressProvider * _progressProvider;
    long long  _ringStyle;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic, copy) CLKProgressProvider *progressProvider;
@property (nonatomic) long long ringStyle;

+ (void)_imageSDKSize:(struct CGSize { double x1; double x2; }*)arg1 deviceSize:(struct CGSize { double x1; double x2; }*)arg2 forSDKVersion:(long long)arg3;
+ (id)templateWithImageProvider:(id)arg1 progressProvider:(id)arg2 ringStyle:(long long)arg3;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1 progressProvider:(id)arg2 ringStyle:(long long)arg3;
- (id)progressProvider;
- (long long)ringStyle;
- (void)setImageProvider:(id)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setRingStyle:(long long)arg1;

@end
