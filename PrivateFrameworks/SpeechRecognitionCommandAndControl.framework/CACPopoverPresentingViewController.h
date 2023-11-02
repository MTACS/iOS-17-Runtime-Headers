
@interface CACPopoverPresentingViewController : UIViewController <UIPopoverPresentationControllerDelegate> {
    <UIPopoverPresentationControllerDelegate> * _popoverPresentationDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _portraitUpSourceRect;
    UIViewController * _viewControllerInPopover;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UIPopoverPresentationControllerDelegate> *popoverPresentationDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } portraitUpSourceRect;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewControllerInPopover;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)loadView;
- (id)popoverPresentationDelegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })portraitUpSourceRect;
- (void)setPopoverPresentationDelegate:(id)arg1;
- (void)setPortraitUpSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewControllerInPopover:(id)arg1;
- (id)viewControllerInPopover;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
