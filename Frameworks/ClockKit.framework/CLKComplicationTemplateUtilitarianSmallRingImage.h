
@interface CLKComplicationTemplateUtilitarianSmallRingImage : CLKComplicationTemplate {
    float  _fillFraction;
    CLKImageProvider * _imageProvider;
    long long  _ringStyle;
}

@property (nonatomic) float fillFraction;
@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic) long long ringStyle;

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
