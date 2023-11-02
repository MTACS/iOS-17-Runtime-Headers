
@protocol LPComponentViewHost <NSObject>

@required

- (bool)allowsBadgingIconEdgeForComponentView:(UIView *)arg1;
- (bool)allowsVibrancyForComponentView:(UIView *)arg1;
- (long long)blurEffectStyleBehindComponentView:(UIView *)arg1;
- (long long)componentView:(LPComponentView *)arg1 allowedImageFilterForFilter:(long long)arg2;
- (<LPAudioPlayer> *)componentView:(LPComponentView *)arg1 playerForAudio:(LPAudio *)arg2;
- (void)componentViewDidChangeIntrinsicContentSize:(LPComponentView *)arg1;
- (void)componentViewDidChangeMediaState:(LPComponentView *)arg1;
- (void)componentViewDidTapCaptionButton:(UIView *)arg1 buttonType:(long long)arg2;
- (LPDownloadProgress *)downloadProgressForComponentView:(LPComponentView *)arg1;
- (NSArray *)layoutExclusionsForView:(UIView *)arg1;
- (bool)linkHasMediaForComponentView:(LPComponentView *)arg1;
- (long long)rendererStyleForComponentView:(UIView *)arg1;
- (long long)sharedObjectDownloadStateForComponentView:(UIView *)arg1;
- (bool)showingDisclosureViewForComponentView:(UIView *)arg1;

@end
