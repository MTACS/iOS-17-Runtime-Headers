
@protocol SBUISystemApertureContentProviding <NSObject>

@required

- (<SBUISystemApertureContentViewProviding> *)actionContentViewProvider;
- (<SBUISystemApertureContentViewProviding> *)leadingContentViewProvider;
- (<SBUISystemApertureContentViewProviding> *)minimalContentViewProvider;
- (<SBUISystemApertureContentViewProviding> *)primaryContentViewProvider;
- (<SBUISystemApertureContentViewProviding> *)secondaryContentViewProvider;
- (<SBUISystemApertureContentViewProviding> *)trailingContentViewProvider;

@end
