
@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _buffer;
    NSString * _featureName;
}

@property (nonatomic, readonly) NSSet *featureNames;

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 andFeatureName:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)init;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 andFeatureName:(id)arg2;

@end
