
@interface VMUDepthGraphEnumerator : VMUGraphEnumerator {
    VMUDepthGraph * _depthGraph;
}

- (void).cxx_destruct;
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(id /* block */)arg2;
- (id)initWithGraph:(id)arg1 depthGraph:(id)arg2;
- (id)statusDisplayDescription;

@end
