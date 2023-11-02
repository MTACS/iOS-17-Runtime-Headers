
@protocol SBUISystemApertureContentViewProviding <NSObject>

@required

- (<SBUISystemApertureContentViewContaining> *)contentContainer;
- (UIView *)providedView;
- (void)setContentContainer:(id <SBUISystemApertureContentViewContaining>)arg1;

@end
