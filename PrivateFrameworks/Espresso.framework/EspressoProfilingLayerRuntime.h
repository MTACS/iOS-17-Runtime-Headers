
@interface EspressoProfilingLayerRuntime : NSObject {
    double  _end_t;
    double  _start_t;
}

@property double end_t;
@property double start_t;

- (double)end_t;
- (void)setEnd_t:(double)arg1;
- (void)setStart_t:(double)arg1;
- (double)start_t;

@end
