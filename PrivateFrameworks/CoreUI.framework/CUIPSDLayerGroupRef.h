
@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {
    _CUIPSDSublayerInfo * _sublayerInfo;
}

- (bool)_isGroupType:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)dealloc;
- (void)enumerateLayersUsingBlock:(id /* block */)arg1;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (bool)isGroupEnd;
- (bool)isGroupStart;
- (bool)isLayerGroup;
- (bool)isOpen;
- (id)layerEnumerator;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfLayers;

@end
