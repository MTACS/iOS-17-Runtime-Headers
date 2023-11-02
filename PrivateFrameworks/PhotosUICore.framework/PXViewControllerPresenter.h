
@interface PXViewControllerPresenter : NSObject <PXPresentationEnvironment> {
    UIViewController * _baseViewController;
    <UIPopoverPresentationControllerSourceItem> * _sourceItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic, readonly) UIViewController *baseViewController;
@property (nonatomic, readonly) bool canPushViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) NSObject<PXAnonymousViewController> *presentingViewController;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *sourceItem;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, readonly) UIView *sourceView;
@property (readonly) Class superclass;

+ (id)defaultPresenterWithViewController:(id)arg1;
+ (id)popoverPresenterWithViewController:(id)arg1 sourceItem:(id)arg2;
+ (id)popoverPresenterWithViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (void).cxx_destruct;
- (id)baseViewController;
- (bool)canPushViewController;
- (void)dismissAlertWithToken:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithBaseViewController:(id)arg1 sourceItem:(id)arg2;
- (id)initWithBaseViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)navigationController;
- (bool)popToViewController:(id)arg1 animated:(bool)arg2;
- (id)presentAlertWithConfigurationHandler:(id /* block */)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)presentingViewController;
- (bool)pushViewController:(id)arg1 animated:(bool)arg2;
- (id)sourceItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)willPushViewController:(id)arg1 inNavigationController:(id)arg2 animated:(bool)arg3;

@end
