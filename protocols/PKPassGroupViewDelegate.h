
@protocol PKPassGroupViewDelegate <NSObject>

@optional

- (bool)groupView:(PKPassGroupView *)arg1 deleteButtonEnabledForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 deleteButtonPressedForPass:(PKPass *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 didUpdatePassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 faceViewFrameDidChangeForFrontmostPassView:(PKPassView *)arg2;
- (void)groupView:(PKPassGroupView *)arg1 frontmostPassViewDidChange:(PKPassView *)arg2 withContext:(PKPassPresentationContext *)arg3;
- (void)groupView:(PKPassGroupView *)arg1 panned:(struct CGPoint { double x1; double x2; })arg2 withVelocity:(struct CGPoint { double x1; double x2; })arg3;
- (long long)groupViewContentModeForFrontmostPassWhenPiled:(PKPassGroupView *)arg1 withDefaultContentMode:(long long)arg2;
- (long long)groupViewContentModeForFrontmostPassWhenStacked:(PKPassGroupView *)arg1;
- (void)groupViewDidUpdatePageControlVisibility:(PKPassGroupView *)arg1;
- (void)groupViewExpandButtonTapped:(PKPassGroupView *)arg1;
- (void)groupViewPanDidBegin:(PKPassGroupView *)arg1;
- (void)groupViewPanDidEnd:(PKPassGroupView *)arg1;
- (unsigned long long)groupViewPassesSuppressedContent:(PKPassGroupView *)arg1;
- (void)groupViewPressed:(PKPassGroupView *)arg1;
- (void)groupViewPressedDidEnd:(PKPassGroupView *)arg1;
- (PKReusablePassViewQueue *)groupViewReusablePassViewQueue:(PKPassGroupView *)arg1;
- (bool)groupViewShouldAllowPanning:(PKPassGroupView *)arg1;
- (void)groupViewTapped:(PKPassGroupView *)arg1;

@end
