
@interface CRTextDetectorModelV3Input : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _img_input;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic) struct __CVBuffer { }*img_input;

- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (struct __CVBuffer { }*)img_input;
- (id)initWithImg_input:(struct __CVBuffer { }*)arg1;
- (void)setImg_input:(struct __CVBuffer { }*)arg1;

@end
