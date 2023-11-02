
@interface CMIInferenceNetworkInstanceBindingEspressoV1 : NSObject {
    NSString * _name;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;

- (void).cxx_destruct;
- (void)dealloc;
- (id)name;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setName:(id)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
