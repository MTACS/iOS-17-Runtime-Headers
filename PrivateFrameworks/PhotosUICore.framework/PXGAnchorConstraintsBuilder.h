
@interface PXGAnchorConstraintsBuilder : NSObject <PXGAnchorConstraints> {
    NSMutableArray * _constraints;
}

@property (nonatomic, readonly, copy) NSArray *constraints;

- (void).cxx_destruct;
- (void)_keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 inequality:(long long)arg4 visibleEdge:(unsigned int)arg5 offset:(double)arg6;
- (id)constraints;
- (id)init;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 greaterThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepEdge:(unsigned int)arg1 ofSpriteWithReference:(id)arg2 referencingOptions:(unsigned long long)arg3 lessThanOrEqualToVisibleEdge:(unsigned int)arg4 offset:(double)arg5;
- (void)keepSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 visuallyStableForAttribute:(long long)arg3;
- (void)keepVisiblePortionOfSpriteWithReference:(id)arg1 referencingOptions:(unsigned long long)arg2 padding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 visuallyStableForAttribute:(long long)arg4;

@end
