
@interface PRNameLabelViewControllerTransition : NSObject <PREditorTitleViewControllerTransitioning> {
    BSUIVibrancyConfiguration * _fromConfiguration;
    BSUIVibrancyConfiguration * _toConfiguration;
    PRNameLabelViewController * _viewController;
}

@property (nonatomic, readonly) BSUIVibrancyConfiguration *fromConfiguration;
@property (nonatomic, readonly) BSUIVibrancyConfiguration *toConfiguration;
@property (nonatomic, readonly) PRNameLabelViewController *viewController;

- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)finishInteractiveTransition;
- (id)fromConfiguration;
- (id)initWithViewController:(id)arg1 fromVibrancyConfiguration:(id)arg2 toVibrancyConfiguration:(id)arg3;
- (id)toConfiguration;
- (void)updateInteractiveTransition:(double)arg1;
- (id)viewController;

@end
