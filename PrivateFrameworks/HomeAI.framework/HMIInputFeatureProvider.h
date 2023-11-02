
@interface HMIInputFeatureProvider : NSObject <MLFeatureProvider> {
    NSString * _inputName;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (readonly) NSString *inputName;
@property (readonly) struct __CVBuffer { }*pixelBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 inputName:(id)arg2;
- (id)inputName;
- (struct __CVBuffer { }*)pixelBuffer;

@end
