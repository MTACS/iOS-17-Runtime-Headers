
@interface NUVideoAttributesJob : NURenderJob {
    NUVideoAttributes * _videoAttributes;
}

@property (nonatomic, retain) NUVideoAttributes *videoAttributes;

- (void).cxx_destruct;
- (bool)prepare:(out id*)arg1;
- (id)result;
- (void)setVideoAttributes:(id)arg1;
- (id)videoAttributes;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsRenderStage;

@end
