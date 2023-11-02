
@interface OBBaseWelcomeController : UIViewController {
    unsigned long long  _templateType;
}

@property (nonatomic) unsigned long long templateType;

+ (struct CGSize { double x1; double x2; })_preferredContentSizeInBuddy:(bool)arg1;
+ (struct CGSize { double x1; double x2; })preferredContentSize;
+ (struct CGSize { double x1; double x2; })preferredContentSizeInSetupAssistant;

- (void)_applyChromelessToBar:(long long)arg1 navigationItem:(id)arg2;
- (void)_presentationStyleValidationCheck;
- (double)autoScrollEdgeTransitionDistance;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })directionalLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insetsForTemplateType:(unsigned long long)arg1;
- (void)loadView;
- (long long)navigationBarScrollToEdgeBehavior;
- (id)navigationItem;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setTemplateType:(unsigned long long)arg1;
- (unsigned long long)templateType;
- (void)updateDirectionalLayoutMargins;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
