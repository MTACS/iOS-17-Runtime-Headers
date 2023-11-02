
@interface SignificantActivityFcosInput : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _image_Placeholder;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct __CVBuffer { }*image_Placeholder;

- (void)dealloc;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (struct __CVBuffer { }*)image_Placeholder;
- (id)initWithImage_Placeholder:(struct __CVBuffer { }*)arg1;
- (id)initWithImage_PlaceholderAtURL:(id)arg1 error:(id*)arg2;
- (id)initWithImage_PlaceholderFromCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (void)setImage_Placeholder:(struct __CVBuffer { }*)arg1;
- (bool)setImage_PlaceholderWithCGImage:(struct CGImage { }*)arg1 error:(id*)arg2;
- (bool)setImage_PlaceholderWithURL:(id)arg1 error:(id*)arg2;

@end
