
@interface BPSAggregator : NSObject {
    id  _accumulator;
    id /* block */  _closure;
}

@property (nonatomic, readonly) id accumulator;
@property (nonatomic, readonly) id /* block */ closure;

- (void).cxx_destruct;
- (id)accumulator;
- (id /* block */)closure;
- (id)initWithAccumulator:(id)arg1 closure:(id /* block */)arg2;

@end
