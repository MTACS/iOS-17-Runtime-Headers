
@interface PRNameLabelViewController : UIViewController <PREditorTitleViewController> {
    UIFont * _baseFont;
    PRNameLabelViewControllerTransition * _currentTransition;
    NSString * _displayString;
    PREditorElementLayoutController * _layoutController;
    PRIncomingCallTextViewAdapter * _nameTextViewAdapter;
}

@property (nonatomic, retain) UIFont *baseFont;
@property (nonatomic, retain) PRNameLabelViewControllerTransition *currentTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PREditorElementLayoutController *layoutController;
@property (nonatomic, retain) PRIncomingCallTextViewAdapter *nameTextViewAdapter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseFont;
- (id)beginInteractiveTransitionToVibrancyConfiguration:(id)arg1;
- (id)currentTransition;
- (id)displayString;
- (id)effectiveFont;
- (double)idealFontSize;
- (id)layoutController;
- (void)loadView;
- (id)nameTextViewAdapter;
- (id)pr_baseFont;
- (id)pr_beginInteractiveTransitionToBaseFont:(id)arg1 vibrancyConfiguration:(id)arg2 cachingVibrancyTransitionProvider:(id)arg3;
- (void)pr_setBackgroundType:(long long)arg1;
- (void)pr_setDisplayDate:(id)arg1;
- (void)pr_setDisplayString:(id)arg1;
- (void)pr_setElements:(unsigned long long)arg1;
- (void)pr_setStylingFromTitleStyleConfiguration:(id)arg1 withExtensionBundleURL:(id)arg2 forRole:(id)arg3;
- (void)pr_setUsesEditingLayout:(bool)arg1;
- (void)removeIncomingCallTextViewAdapterFromParent:(id)arg1;
- (void)setBaseFont:(id)arg1;
- (void)setCurrentTransition:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setLayoutController:(id)arg1;
- (void)setNameTextViewAdapter:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRectForLayout:(unsigned long long)arg1;
- (void)transition:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)transition:(id)arg1 didUpdate:(double)arg2;
- (id)vibrancyView;
- (void)viewDidLayoutSubviews;

@end
