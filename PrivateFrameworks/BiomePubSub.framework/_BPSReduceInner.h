
@interface _BPSReduceInner : BPSReduceProducer {
    id /* block */  _reduce;
}

@property (nonatomic, readonly) id /* block */ reduce;

- (void).cxx_destruct;
- (id)initWithDownstream:(id)arg1 initial:(id)arg2 reduce:(id /* block */)arg3;
- (id)receiveNewValue:(id)arg1;
- (id /* block */)reduce;

@end
