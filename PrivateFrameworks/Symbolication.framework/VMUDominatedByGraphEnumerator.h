
@interface VMUDominatedByGraphEnumerator : VMUGraphEnumerator {
    VMUDominatorGraph * _dominatorGraph;
}

- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (id)initWithGraph:(id)arg1 dominatorGraph:(id)arg2;
- (id)statusDisplayDescription;

@end
