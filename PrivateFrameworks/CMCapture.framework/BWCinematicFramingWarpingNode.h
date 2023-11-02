
@interface BWCinematicFramingWarpingNode : BWNode {
    <BWCinematicFramingStatesProvider> * _framingStatesProvider;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    VCProcessor * _vcProcessor;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
