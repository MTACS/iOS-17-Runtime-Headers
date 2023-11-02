
@interface PKImageRenderer : NSObject {
    long long  _cancelCount;
    PKMetalRendererController * _rendererController;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    bool  _synchronous;
}

@property (nonatomic) long long cancelCount;
@property (nonatomic) bool invertColors;
@property (nonatomic, retain) PKMetalRendererController *rendererController;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) bool sixChannelBlending;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic) bool synchronous;

+ (void)_fuzzTestUnzippedData:(id)arg1;
+ (struct CGImage { }*)createJPEGCopyFrom:(struct CGImage { }*)arg1 compressionQuality:(double)arg2;

- (void).cxx_destruct;
- (void)_renderCGStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)buildStrokeRenderCacheForDrawing:(id)arg1;
- (void)cancel;
- (long long)cancelCount;
- (void)dealloc;
- (id)initSyncWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 renderQueue:(id)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 renderQueue:(id)arg3 sixChannelBlending:(bool)arg4;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMetal:(bool)arg3;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 useMetal:(bool)arg3 renderQueue:(id)arg4;
- (bool)invertColors;
- (void)renderCGStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)renderDrawing:(id)arg1 completion:(id /* block */)arg2;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (id)rendererController;
- (void)resume;
- (double)scale;
- (void)setCancelCount:(long long)arg1;
- (void)setInvertColors:(bool)arg1;
- (void)setRendererController:(id)arg1;
- (void)setSynchronous:(bool)arg1;
- (void)setupWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 renderQueue:(id)arg3 sixChannelBlending:(bool)arg4 synchronous:(bool)arg5;
- (bool)sixChannelBlending;
- (void)sixChannelCGRenderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)sixChannelCGRenderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)sixChannelPDFRenderDrawing:(id)arg1 context:(struct CGContext { }*)arg2 clippedToStrokeSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 scale:(double)arg4 completion:(id /* block */)arg5;
- (struct CGSize { double x1; double x2; })size;
- (bool)synchronous;

@end
