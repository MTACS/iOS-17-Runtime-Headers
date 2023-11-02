
@interface InternalCustomTileLike : NSObject <MLCustomLayer> {
    unsigned long long  _inputRank;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _inputShape;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _multiples;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _outputShape;
}

@property (nonatomic, readonly) unsigned long long inputRank;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  inputShape; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  multiples; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}} */
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<unsigned long' */ struct  outputShape; /* unknown property attribute:  std::allocator<unsigned long>>=^Q}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)evaluateOnCPUWithInputs:(id)arg1 outputs:(id)arg2 error:(id*)arg3;
- (id)initWithParameterDictionary:(id)arg1 error:(id*)arg2;
- (unsigned long long)inputRank;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })inputShape;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })multiples;
- (struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })outputShape;
- (id)outputShapesForInputShapes:(id)arg1 error:(id*)arg2;
- (bool)setWeightData:(id)arg1 error:(id*)arg2;

@end
