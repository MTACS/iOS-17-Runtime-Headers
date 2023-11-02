
@interface CVNLPPerformance : NSObject {
    bool  _computePerf;
    NSMutableDictionary * _results;
}

@property (nonatomic, readonly) bool computePerf;
@property (nonatomic, readonly) NSMutableDictionary *results;

- (void).cxx_destruct;
- (bool)computePerf;
- (id)initWithOptions:(id)arg1;
- (id)results;
- (void)run:(id)arg1 block:(id /* block */)arg2;

@end
