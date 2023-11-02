
@interface SISceneSegmentationData : SIOutputData {
    struct __CVBuffer { } * _confidence;
    struct CGSize { 
        double width; 
        double height; 
    }  _resolution;
    struct __CVBuffer { } * _semantic;
    struct __CVBuffer { } * _uncertainty;
}

@property (readonly) struct __CVBuffer { }*confidence;
@property (readonly) struct CGSize { double x1; double x2; } resolution;
@property (readonly) struct __CVBuffer { }*semantic;
@property (readonly) struct __CVBuffer { }*uncertainty;

- (struct __CVBuffer { }*)confidence;
- (void)dealloc;
- (id)initWithOutputResolution:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithOutputSemanticBuffer:(struct __CVBuffer { }*)arg1 confidenceBuffer:(struct __CVBuffer { }*)arg2 uncertaintyBuffer:(struct __CVBuffer { }*)arg3;
- (struct CGSize { double x1; double x2; })resolution;
- (struct __CVBuffer { }*)semantic;
- (struct __CVBuffer { }*)uncertainty;

@end
