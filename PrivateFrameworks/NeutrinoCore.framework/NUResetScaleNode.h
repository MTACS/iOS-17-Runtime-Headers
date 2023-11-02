
@interface NUResetScaleNode : NUAbstractScaleNode {
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } scale;

- (id)initWithInput:(id)arg1 scale:(struct { long long x1; long long x2; })arg2;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (struct { long long x1; long long x2; })scale;

@end
