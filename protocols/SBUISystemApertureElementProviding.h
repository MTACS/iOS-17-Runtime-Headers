
@protocol SBUISystemApertureElementProviding <NSObject>

@required

- (UIViewController<SBUISystemApertureElement> *)systemApertureElementViewController;

@optional

- (<SBUISystemApertureElement> *)systemApertureElement;

@end
