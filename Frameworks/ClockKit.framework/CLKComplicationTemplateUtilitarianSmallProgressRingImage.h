
@interface CLKComplicationTemplateUtilitarianSmallProgressRingImage : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
    CLKProgressProvider * _progressProvider;
    long long  _ringStyle;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic, copy) CLKProgressProvider *progressProvider;
@property (nonatomic) long long ringStyle;

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
