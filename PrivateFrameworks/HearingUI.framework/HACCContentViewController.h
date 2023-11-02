
@interface HACCContentViewController : UIViewController <CCUIContentModuleContentViewController, UIGestureRecognizerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collapsedFrame;
    UIView<HACCContentModule> * _contentView;
    unsigned long long  _controlType;
    CCUIContentModuleDetailTransitioningDelegate * _detailTransitioningDelegate;
    UIViewController<CCUIContentModuleContentViewController> * _expandedViewController;
    UITapGestureRecognizer * _tapRecognizer;
    double  preferredExpandedContentHeight;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collapsedFrame;
@property (nonatomic, retain) UIView<HACCContentModule> *contentView;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<CCUIContentModuleContentViewController> *expandedViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, readonly) bool shouldPerformClickInteraction;
@property (nonatomic, readonly) bool shouldPerformHoverInteraction;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (id)_axIdentifierForModule:(unsigned long long)arg1;
- (bool)_canShowWhileLocked;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)addExpandedView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrame;
- (id)contentView;
- (id)contentViewForControlType:(unsigned long long)arg1 module:(unsigned long long)arg2 delegate:(id)arg3;
- (unsigned long long)controlTypeForModule:(unsigned long long)arg1;
- (id)expandedViewController;
- (id)initWithContentModule:(unsigned long long)arg1 andDelegate:(id)arg2;
- (double)preferredExpandedContentHeight;
- (void)removeExpandedView:(id)arg1;
- (void)setCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setExpandedViewController:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)tapRecognizer;
- (void)updateValue;
- (void)updateViewConstraints;
- (void)updateWithValue:(id)arg1;
- (id)value;

@end
