
@interface NUSourceOrientationNode : NUOrientationNode {
    bool  _skipOrientation;
}

@property (nonatomic, readonly) bool skipOrientation;

+ (long long)originalOrientationToApplyToSource:(id)arg1 skipOrientation:(bool)arg2 error:(out id*)arg3;

- (id)initWithInput:(id)arg1 source:(id)arg2 settings:(id)arg3 orientation:(long long)arg4;
- (id)initWithOrientation:(long long)arg1 input:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (bool)skipOrientation;

@end
