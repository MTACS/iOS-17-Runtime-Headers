
@interface ADDisparityToDepthWorldPointsContainer : NSObject {
    struct unique_ptr<DisparityToDepth::WorldPointsContainer, std::default_delete<DisparityToDepth::WorldPointsContainer>> { 
        struct __compressed_pair<DisparityToDepth::WorldPointsContainer *, std::default_delete<DisparityToDepth::WorldPointsContainer>> { 
            struct WorldPointsContainer {} *__value_; 
        } __ptr_; 
    }  _worldPoints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct ADDisparityToDepthFitWorldPoint { float x1; int x2; })getPointFromContainer:(int)arg1;
- (id)initWithParameters:(id)arg1;
- (void)push:(struct ADDisparityToDepthFitWorldPoint { float x1; int x2; }*)arg1 pointCount:(unsigned long long)arg2;
- (unsigned long long)size;

@end
