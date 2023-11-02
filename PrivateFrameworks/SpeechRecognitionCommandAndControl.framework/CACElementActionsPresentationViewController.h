
@interface CACElementActionsPresentationViewController : UIViewController <CACViewController, UIPopoverPresentationControllerDelegate> {
    UIAlertController * _alertController;
    AXElement * _element;
    <CACElementActionsPresentationViewControllerDelegate> * _elementActionsDelegate;
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
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXElement *element;
@property (nonatomic) <CACElementActionsPresentationViewControllerDelegate> *elementActionsDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOverlay;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long zOrder;

+ (id)_elementActionManager;
+ (bool)canShowElementActionsForElement:(id)arg1;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)actionForAXAction:(id)arg1;
- (id)alertController;
- (id)element;
- (id)elementActionsDelegate;
- (id)init;
- (bool)isOverlay;
- (void)performHideWithCompletion:(id /* block */)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setElementActionsDelegate:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (long long)zOrder;

@end
