
@interface ICDocCamImageSequenceFrame : NSObject {
    NSDictionary * _frameOptions;
    struct __CVBuffer { } * _pb;
}

@property (nonatomic, copy) NSDictionary *frameOptions;
@property (nonatomic) struct __CVBuffer { }*pb;

- (void).cxx_destruct;
- (id)frameOptions;
- (struct __CVBuffer { }*)pb;
- (void)setFrameOptions:(id)arg1;
- (void)setPb:(struct __CVBuffer { }*)arg1;

@end
