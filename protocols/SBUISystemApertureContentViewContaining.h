
@protocol SBUISystemApertureContentViewContaining <NSObject>

@required

- (void)preferredContentSizeDidInvalidateForContentViewProvider:(id <SBUISystemApertureContentViewProviding>)arg1;

@optional

- (struct CGSize { double x1; double x2; })intrinsicCompactContainerSize;

@end
