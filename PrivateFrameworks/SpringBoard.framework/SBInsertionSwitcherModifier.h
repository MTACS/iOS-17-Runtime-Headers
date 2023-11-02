
@interface SBInsertionSwitcherModifier : SBSwitcherModifier {
    SBAppLayout * _appLayout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetBeforeInsertion;
    bool  _isSimulatingPreInsertionState;
    unsigned long long  _phase;
}

@property (nonatomic, readonly) unsigned long long phase;

- (void).cxx_destruct;
- (void)_performBlockBySimulatingPreInsertionState:(id /* block */)arg1;
- (id)animationAttributesForLayoutElement:(id)arg1;
- (bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (id)handleInsertionEvent:(id)arg1;
- (id)initWithAppLayout:(id)arg1;
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;
- (unsigned long long)phase;
- (struct CGPoint { double x1; double x2; })scrollViewContentOffset;
- (id)visibleAppLayouts;

@end
