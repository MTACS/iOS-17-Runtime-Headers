
@interface ADFlowFrameOutput : NSObject {
    struct __CVBuffer { } * _confidence;
    struct __CVBuffer { } * _depth;
}

@property (nonatomic, readonly) struct __CVBuffer { }*confidence;
@property (nonatomic, readonly) struct __CVBuffer { }*depth;

- (struct __CVBuffer { }*)confidence;
- (void)dealloc;
- (struct __CVBuffer { }*)depth;
- (void)setConfidence:(struct __CVBuffer { }*)arg1;
- (void)setDepth:(struct __CVBuffer { }*)arg1;

@end
