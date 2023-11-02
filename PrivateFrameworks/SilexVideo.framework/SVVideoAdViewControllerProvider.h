
@interface SVVideoAdViewControllerProvider : NSObject <SVVideoAdViewControllerProviding> {
    <SVVideoAdViewControllerProviding> * _viewControllerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewControllerForModalPresentation;
@property (nonatomic, readonly) <SVVideoAdViewControllerProviding> *viewControllerProvider;

- (void).cxx_destruct;
- (id)initWithViewControllerProvider:(id)arg1;
- (id)viewControllerForModalPresentation;
- (id)viewControllerProvider;

@end
