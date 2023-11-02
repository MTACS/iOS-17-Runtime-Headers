
@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * _data;
}

@property (nonatomic) struct __CVBuffer { }*data;
@property (nonatomic, readonly) NSSet *featureNames;

- (struct __CVBuffer { }*)data;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithData:(struct __CVBuffer { }*)arg1;
- (void)setData:(struct __CVBuffer { }*)arg1;

@end
