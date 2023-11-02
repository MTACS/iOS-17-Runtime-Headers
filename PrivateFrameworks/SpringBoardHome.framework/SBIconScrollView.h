
@interface SBIconScrollView : BSUIScrollView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastAnimatedScrollContentOffset;
}

@property (nonatomic) <SBIconScrollViewDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastAnimatedScrollContentOffset;

- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })_roundedProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_scrollsToMakeFirstResponderVisible;
- (bool)cancelTouchTracking;
- (struct CGPoint { double x1; double x2; })lastAnimatedScrollContentOffset;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setLastAnimatedScrollContentOffset:(struct CGPoint { double x1; double x2; })arg1;

@end
