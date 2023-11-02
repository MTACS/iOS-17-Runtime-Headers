
@interface AKAuthorizationSubPane : NSObject <AKAuthorizationSubPaneAdding> {
    double  _internalCustomSpacingAfter;
    UIView * _internalView;
    UIViewController * _viewController;
}

@property (nonatomic) double customSpacingAfter;
@property (nonatomic) double internalCustomSpacingAfter;
@property (nonatomic, readonly) UIView *internalView;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (double)customSpacingAfter;
- (id)initWithView:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (double)internalCustomSpacingAfter;
- (id)internalView;
- (void)setCustomSpacingAfter:(double)arg1;
- (void)setInternalCustomSpacingAfter:(double)arg1;
- (id)view;
- (id)viewController;

@end
