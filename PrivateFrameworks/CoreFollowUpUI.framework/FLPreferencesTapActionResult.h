
@interface FLPreferencesTapActionResult : NSObject {
    unsigned long long  _presentationStyle;
    UIViewController * _viewControllerToPresent;
}

@property (nonatomic, readonly) unsigned long long presentationStyle;
@property (nonatomic, readonly) UIViewController *viewControllerToPresent;

- (void).cxx_destruct;
- (id)initWithViewControllerToPresent:(id)arg1 presentationStyle:(unsigned long long)arg2;
- (unsigned long long)presentationStyle;
- (id)viewControllerToPresent;

@end
