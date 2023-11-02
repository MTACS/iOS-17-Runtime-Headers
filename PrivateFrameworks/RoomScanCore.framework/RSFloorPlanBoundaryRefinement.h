
@interface RSFloorPlanBoundaryRefinement : NSObject {
    bool  _initProcessor;
    NSArray * _prevInputDoors;
    NSArray * _prevInputWindows;
    RSFloorPlan * _prevOutputFloorPlan;
    struct unique_ptr<rs_erf::EdgeRefinement, std::default_delete<rs_erf::EdgeRefinement>> { 
        struct __compressed_pair<rs_erf::EdgeRefinement *, std::default_delete<rs_erf::EdgeRefinement>> { 
            struct EdgeRefinement {} *__value_; 
        } __ptr_; 
    }  _processor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;

@end
