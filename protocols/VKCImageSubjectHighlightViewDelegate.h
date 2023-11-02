
@protocol VKCImageSubjectHighlightViewDelegate <NSObject>

@required

- (bool)isSubjectHighlightShowingLivePhoto:(VKCImageSubjectHighlightView *)arg1 delegateHasImplementation:(bool*)arg2;
- (UIViewController *)presentingViewControllerForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 activateVSItemForNormalizedPath:(UIBezierPath *)arg2;
- (bool)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 containsVSItemForNormalizedPath:(UIBezierPath *)arg2;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 livePhotoShouldPlay:(bool)arg2;
- (void)subjectHighlightView:(void *)arg1 prepareForCalloutAction:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: VKCImageSubjectHighlightView *, SEL, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 shouldBeginInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg2 withType:(unsigned long long)arg3;
- (void)subjectHighlightView:(VKCImageSubjectHighlightView *)arg1 willBeginInteractionAtPoint:(struct CGPoint { double x1; double x2; })arg2 withType:(unsigned long long)arg3;
- (void)subjectHighlightViewSubjectInteractionInProgressDidChange:(VKCImageSubjectHighlightView *)arg1;
- (NSURL *)tempPNGURLForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;
- (void)videoPreviewAvailableForSubjectHighlightView:(VKCImageSubjectHighlightView *)arg1;

@end
