
@interface InternalCustomGatherTree : NSObject <MLCustomLayer> {
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _shape;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<int' */ struct  shape; /* unknown property attribute:  std::allocator<int>>=^i}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3;
- (id)initWithParameterDictionary:(id)arg1 error:(id*)arg2;
- (id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2;
- (bool)setWeightData:(id)arg1 error:(id*)arg2;
- (struct vector<int, std::allocator<int>> { int *x1; int *x2; struct __compressed_pair<int *, std::allocator<int>> { int *x_3_1_1; } x3; })shape;

@end
