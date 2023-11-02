
@interface VMUFlattenGraphEnumerator : VMUGraphEnumerator {
    void * _deliveredReachable;
    VMUGraphEnumerator * _graphEnumerator;
    bool  _iteratingTopLevel;
    void * _topLevel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (id)initWithGraph:(id)arg1 graphEnumerator:(id)arg2;
- (id)statusDisplayDescription;

@end
