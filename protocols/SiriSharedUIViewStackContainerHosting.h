
@protocol SiriSharedUIViewStackContainerHosting

@required

- (void)addContentView:(UIView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *)arg1;
- (double)bottomPadding;
- (void)bringSubviewToFront:(UIView *)arg1;
- (NSArray *)contentViews;
- (void)didDismissModalContent;
- (bool)hasContentAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (UIView *)hostingView;
- (bool)isInAmbient;
- (void)relayout;
- (void)removeContentView:(UIView<SiriSharedUIStackableContent><SiriSharedUIStackableContentActionOffering> *)arg1;
- (SiriSharedUIStandardScrollView *)scrollView;
- (void)setBottomPadding:(double)arg1;
- (void)setBottomPadding:(void *)arg1 animatedWithDuration:(void *)arg2 animationOptions:(void *)arg3 alongsideAnimations:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 13: double, double, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, void*
- (void)setIsInAmbient:(bool)arg1;
- (void)setScrollView:(SiriSharedUIStandardScrollView *)arg1;
- (NSArray *)stackableViewsWithAttachment:(long long)arg1;
- (double)topPadding;
- (void)willDismissModalContent;
- (void)willPresentModalContent;

@end
