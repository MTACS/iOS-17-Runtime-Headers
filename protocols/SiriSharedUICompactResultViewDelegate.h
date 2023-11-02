
@protocol SiriSharedUICompactResultViewDelegate

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForResultView:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (double)maximumHeightForResultView:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (void)resultViewContentDidLoad:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (void)resultViewContentDidScroll:(id <SiriSharedUICompactResultViewHosting>)arg1;
- (void)resultViewContentScrolled:(id <SiriSharedUICompactResultViewHosting>)arg1 toContentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)resultViewContentScrolling:(id <SiriSharedUICompactResultViewHosting>)arg1 didBegin:(bool)arg2;
- (void)resultViewDarkenedContentWasTapped:(id <SiriSharedUICompactResultViewHosting>)arg1;

@end
