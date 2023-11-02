
@interface ODDNodePoint : ODDDataPoint {
    NSMutableArray * mChildren;
    ODDNodePoint * mParent;
    ODDTransitionPoint * mParentTransition;
    ODDTransitionPoint * mSiblingTransition;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (id)parent;
- (id)parentTransition;
- (void)setParentTransition:(id)arg1;
- (void)setSiblingTransition:(id)arg1;
- (void)setType:(int)arg1;
- (id)siblingTransition;

@end
