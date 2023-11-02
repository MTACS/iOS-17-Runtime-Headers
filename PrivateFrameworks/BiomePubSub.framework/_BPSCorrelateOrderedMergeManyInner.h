
@interface _BPSCorrelateOrderedMergeManyInner : _BPSAbstractCorrelateOrderedMerge {
    id /* block */  _comparator;
}

@property (nonatomic, copy) id /* block */ comparator;

- (void).cxx_destruct;
- (id /* block */)comparator;
- (long long)compareFirst:(id)arg1 withSecond:(id)arg2;
- (id)initWithDownstream:(id)arg1 upstreamCount:(unsigned long long)arg2 comparator:(id /* block */)arg3;
- (void)setComparator:(id /* block */)arg1;

@end
