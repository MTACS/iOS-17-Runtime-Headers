
@interface MKLookAroundTransitionController : NSObject <UIViewControllerTransitioningDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    UIView * _sourceView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialFrame;
@property (nonatomic) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1 fromViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)_present:(id)arg1 fromViewController:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)beginFullScreenDismissalOfViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)beginFullScreenPresentationOfViewController:(id)arg1 fromView:(id)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrame;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
