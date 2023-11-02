
@interface PHASEEnvelope : NSObject {
    PHASENumericPair * _domain;
    struct unique_ptr<Phase::Envelope<double>, std::default_delete<Phase::Envelope<double>>> { 
        struct __compressed_pair<Phase::Envelope<double> *, std::default_delete<Phase::Envelope<double>>> { 
            void *__value_; 
        } __ptr_; 
    }  _envelope;
    PHASENumericPair * _range;
    NSArray * _segments;
    void _startPoint;
}

@property (nonatomic, readonly) PHASENumericPair *domain;
@property (nonatomic, readonly) PHASENumericPair *range;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, readonly) void startPoint;

+ (id)new;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)domain;
- (double)evaluate:(double)arg1;
- (double)evaluateForValue:(double)arg1;
- (id)init;
- (id)initWithStartPoint:(void *)arg1 segments:(void *)arg2; // needs 2 arg types, found 1: id
- (id)range;
- (id)segments;
- (void)startPoint;

@end
