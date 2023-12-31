
@interface _UIScrollViewSimulatedGesture : NSObject {
    id /* block */  _beginBlock;
    double  _beginTime;
    id /* block */  _endBlock;
    double  _simulationDuration;
    id /* block */  _updateBlock;
}

- (void).cxx_destruct;
- (id)initWithDuration:(double)arg1 begin:(id /* block */)arg2 update:(id /* block */)arg3 end:(id /* block */)arg4;
- (bool)updateSimulation;

@end
