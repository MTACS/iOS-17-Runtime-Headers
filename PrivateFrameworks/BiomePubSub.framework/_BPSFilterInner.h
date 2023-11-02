
@interface _BPSFilterInner : BPSFilterProducer {
    id /* block */  _isIncluded;
}

@property (nonatomic, readonly) id /* block */ isIncluded;

- (void).cxx_destruct;
- (id)initWithDownstream:(id)arg1 isIncluded:(id /* block */)arg2;
- (id /* block */)isIncluded;
- (id)receiveNewValue:(id)arg1;

@end
