
@interface PREditingStandaloneLabelViewInteractiveTransition : NSObject <BSDescriptionStreamable, PREditingStandaloneLabelViewTransitioning> {
    NSString * _currentText;
    PREditingStandaloneLabelView * _label;
    NSString * _transitionText;
}

@property (nonatomic, readonly, copy) NSString *currentText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PREditingStandaloneLabelView *label;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transitionText;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (void)cancelInteractiveTransition;
- (id)currentText;
- (id)description;
- (void)finishInteractiveTransition;
- (id)initWithLabel:(id)arg1 currentText:(id)arg2 transitionText:(id)arg3;
- (id)label;
- (id)transitionText;
- (void)updateInteractiveTransition:(double)arg1;

@end
