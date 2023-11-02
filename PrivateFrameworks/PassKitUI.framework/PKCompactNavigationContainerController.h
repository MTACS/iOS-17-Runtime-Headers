
@interface PKCompactNavigationContainerController : UIViewController <PKContentContainerObserver, PKViewWindowObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    bool  _centeredCard;
    PKCompactNavigationContainedNavigationController * _containedNavigationController;
    unsigned short  _contentSizeUpdateDeferralCounter;
    bool  _deferredContentSizeUpdate;
    bool  _deferredContentSizeUpdateIsAnimated;
    bool  _deferredContentSizeUpdateIsForced;
    <PKCompactNavigationContainerControllerDelegate> * _delegate;
    bool  _didMoveToWindowDirtiesLayout;
    <UICoordinateSpace> * _exclusionCoordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exclusionRect;
    unsigned long long  _explicitlyDefinedSupportedInterfaceOrientations;
    bool  _hasExplicitlyDefinedSupportedInterfaceOrientations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _keyboardVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastKeyboardFrame;
    unsigned short  _layoutGroupCounter;
    UIView * _maskingContainerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _maximumModalPresentationFrame;
    UIViewController * _pendingTopVC;
    unsigned long long  _pendingTopVCIdentifier;
    PKCompactNavigationContainedNavigationWrapperViewController * _presentationContextVC;
    bool  _presentingNavigationController;
    bool  _requiresMasking;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusBarFrame;
    unsigned long long  _style;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIViewController * _topVC;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } preferredContentSize; 
        double minimumNavigationHeight; 
        bool isRoot; 
    }  _topVCInfo;
    bool  _topVCIsExpectedClass;
    bool  _topVCIsInInitialLayout;
    unsigned long long  _updateChildViewControllerSizeCounter;
    unsigned char  _visibility;
}

@property (nonatomic, readonly) PKCompactNavigationContainedNavigationController *containedNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCompactNavigationContainerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didMoveToWindowDirtiesLayout;
@property (nonatomic, readonly) <UICoordinateSpace> *exclusionCoordinateSpace;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } exclusionRect;
@property (readonly) unsigned long long hash;
@property (getter=isPresentingNavigationController, nonatomic) bool presentingNavigationController;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;

+ (id)dimmingColor;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_beginLayoutGroup;
- (bool)_canShowWhileLocked;
- (void)_endLayoutGroup;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })_infoForViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_navigationControllerSizeForChildViewControllerInfo:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })arg1 withCurrentInfo:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetNavigationControllerFrameForInfo:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })arg1;
- (void)_updateForKeyboardIfNecessary;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (void)_updateStatusBarFrame;
- (void)_updateTopViewController:(id)arg1 animated:(bool)arg2;
- (void)_updateTopViewControllerAsync:(id)arg1 animated:(bool)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize { double x1; double x2; })childViewControllerPreferredContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 isRoot:(bool)arg2;
- (struct CGSize { double x1; double x2; })childViewControllerSizeForNavigationControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)containedNavigationController;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)didMoveToWindowDirtiesLayout;
- (id)exclusionCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exclusionRect;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertBackgroundLevelView:(id)arg1;
- (bool)isPresentingNavigationController;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })modalPresentationSize;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 isRoot:(bool)arg2;
- (void)observedView:(id)arg1 didMoveToWindow:(id)arg2;
- (long long)preferredUserInterfaceStyle;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDidMoveToWindowDirtiesLayout:(bool)arg1;
- (void)setExclusionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCoordinateSpace:(id)arg2;
- (void)setPresentingNavigationController:(bool)arg1;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)style;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tapGestureRecognized:(id)arg1;
- (void)updateChildViewControllerSizeAnimated:(bool)arg1;
- (void)updateChildViewControllerSizeAnimated:(bool)arg1 forceUpdate:(bool)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
