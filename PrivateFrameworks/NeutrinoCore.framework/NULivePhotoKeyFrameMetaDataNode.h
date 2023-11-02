
@interface NULivePhotoKeyFrameMetaDataNode : NURenderNode {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _timeFromAdjustment;
}

- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateVideo:(out id*)arg1;
- (id)_evaluateVideoProperties:(out id*)arg1;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 input:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
