
@interface CBHistogramBuilder : NSObject <CBHistogram> {
    NSMutableArray * _bins;
    NSArray * _edges;
}

@property (readonly) NSMutableArray *bins;
@property (readonly) NSArray *edges;

- (id)bins;
- (void)dealloc;
- (id)edges;
- (void)enumerateBinsUsingBlock:(id /* block */)arg1;
- (id)initWithEdges:(id)arg1;
- (void)pushNumber:(double)arg1;
- (void)pushNumberWeighted:(double)arg1 withWeight:(double)arg2;
- (void)reset;

@end
