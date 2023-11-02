
@interface CLKComplicationTemplateCircularSmallRingImage : CLKComplicationTemplate {
    float  _fillFraction;
    CLKImageProvider * _imageProvider;
    long long  _ringStyle;
}

@property (nonatomic) float fillFraction;
@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic) long long ringStyle;

+ (void)_imageSDKSize:(struct CGSize { double x1; double x2; }*)arg1 deviceSize:(struct CGSize { double x1; double x2; }*)arg2 forSDKVersion:(long long)arg3;
+ (id)templateWithImageProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (float)fillFraction;
- (id)imageProvider;
- (id)initWithImageProvider:(id)arg1 fillFraction:(float)arg2 ringStyle:(long long)arg3;
- (long long)ringStyle;
- (void)setFillFraction:(float)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setRingStyle:(long long)arg1;

@end
