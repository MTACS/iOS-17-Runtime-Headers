
@protocol PXGAnchorConstraints

@required

- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(PXGSpriteReference *)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(PXGSpriteReference *)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepSpriteWithReference:(PXGSpriteReference *)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3;
- (void)keepVisiblePortionOfSpriteWithReference:(PXGSpriteReference *)arg1 referencingOptions:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 visuallyStableForAttribute:(long long)arg4;

@end
