
@interface MonzaV4_1Input : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _inputImage;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct __CVBuffer { }*inputImage;

- (void)dealloc;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithInputImage:(struct __CVBuffer { }*)arg1;
- (id)initWithInputImageAtURL:(id)arg1 error:(id*)arg2;
- (id)initWithInputImageFromCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)inputImage;
- (void)setInputImage:(struct __CVBuffer { }*)arg1;
- (bool)setInputImageWithCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (bool)setInputImageWithURL:(id)arg1 error:(id*)arg2;

@end
