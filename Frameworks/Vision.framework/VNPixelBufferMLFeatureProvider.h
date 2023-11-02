
@interface VNPixelBufferMLFeatureProvider : NSObject <MLFeatureProvider> {
    NSString * _imageInputKey;
    <MLFeatureProvider> * _originalFeatureProvider;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (void)dealloc;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3;

@end
