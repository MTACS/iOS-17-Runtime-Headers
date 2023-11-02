
@interface SBOverrideScrollViewContentOffsetSwitcherModifier : SBSwitcherModifier {
    struct CGPoint { 
        double x; 
        double y; 
    }  _scrollViewContentOffset;
}

- (id)initWithScrollViewContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })scrollViewContentOffset;

@end
