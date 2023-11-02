
@interface AMSUIEngagementCardWrapperViewController : AMSUICommonViewController <PRXCardContentProviding> {
    UINavigationController * _childNavigationController;
    long long  _presentationStyle;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) bool allowsPullToDismiss;
@property (nonatomic, readonly) long long cardStyle;
@property (nonatomic, retain) UINavigationController *childNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long presentationStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (bool)allowsPullToDismiss;
- (id)childNavigationController;
- (id)initWithViewController:(id)arg1;
- (long long)presentationStyle;
- (void)setChildNavigationController:(id)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (id)viewController;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
