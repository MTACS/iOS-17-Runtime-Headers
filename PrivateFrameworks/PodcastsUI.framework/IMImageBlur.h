
@interface IMImageBlur : NSObject <IMImageModifier> {
    double  _radius;
    long long  _style;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;

- (id)_backdropBlurSettings;
- (id)_blurredImageFromSourceImage:(id)arg1;
- (id)_lightBackdropBlurSettings;
- (id)_newBackdropSettings;
- (bool)hasModifications;
- (id)imageFromSourceImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 radius:(double)arg2;
- (id)modificationCacheKey;
- (double)radius;
- (long long)style;

@end
