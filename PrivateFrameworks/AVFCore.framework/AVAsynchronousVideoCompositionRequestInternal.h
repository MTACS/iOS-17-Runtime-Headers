
@interface AVAsynchronousVideoCompositionRequestInternal : NSObject {
    struct OpaqueFigVideoCompositorFrame { } * _compositionFrame;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _compositionTime;
    <AVVideoCompositionInstruction> * _instruction;
    bool  _isFinished;
    AVVideoCompositionRenderContext * _renderContext;
    NSDictionary * _sampleBufferSourcesByTrackID;
    AVWeakReference * _session;
    NSArray * _sourceSampleBufferTrackIDsInClientOrder;
    NSArray * _sourceTrackIDsInClientOrder;
    NSDictionary * _sourcesByTrackID;
}

@property (nonatomic) struct OpaqueFigVideoCompositorFrame { }*compositionFrame;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } compositionTime;
@property (nonatomic, retain) <AVVideoCompositionInstruction> *instruction;
@property (nonatomic) bool isFinished;
@property (nonatomic, retain) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic, retain) NSDictionary *sampleBufferSourcesByTrackID;
@property (nonatomic, retain) AVWeakReference *session;
@property (nonatomic, retain) NSArray *sourceSampleBufferTrackIDsInClientOrder;
@property (nonatomic, retain) NSArray *sourceTrackIDsInClientOrder;
@property (nonatomic, retain) NSDictionary *sourcesByTrackID;

- (struct OpaqueFigVideoCompositorFrame { }*)compositionFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })compositionTime;
- (void)dealloc;
- (id)instruction;
- (bool)isFinished;
- (id)renderContext;
- (id)sampleBufferSourcesByTrackID;
- (id)session;
- (void)setCompositionFrame:(struct OpaqueFigVideoCompositorFrame { }*)arg1;
- (void)setCompositionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setInstruction:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setRenderContext:(id)arg1;
- (void)setSampleBufferSourcesByTrackID:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSourceSampleBufferTrackIDsInClientOrder:(id)arg1;
- (void)setSourceTrackIDsInClientOrder:(id)arg1;
- (void)setSourcesByTrackID:(id)arg1;
- (id)sourceSampleBufferTrackIDsInClientOrder;
- (id)sourceTrackIDsInClientOrder;
- (id)sourcesByTrackID;

@end
