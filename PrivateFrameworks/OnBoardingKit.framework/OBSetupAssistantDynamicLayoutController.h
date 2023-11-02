
@interface OBSetupAssistantDynamicLayoutController : UIViewController <OBSetupAssistantSupport> {
    OBWelcomeController * _backingController;
    id /* block */  _constraintForLayoutFactory;
    bool  _enableStickyHeader;
    NSString * _localDetailText;
    UIImage * _localImage;
    NSString * _localTitle;
    UIView * _mainContentSubview;
    UIView * _outerContentView;
}

@property (nonatomic, retain) OBWelcomeController *backingController;
@property (nonatomic, copy) id /* block */ constraintForLayoutFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableStickyHeader;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localDetailText;
@property (nonatomic, retain) UIImage *localImage;
@property (nonatomic, copy) NSString *localTitle;
@property (nonatomic, retain) UIView *mainContentSubview;
@property (nonatomic, retain) UIView *outerContentView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_relayoutContentSubviewIfNeeded;
- (void)_updateScrollUnderLayout;
- (void)addContentSubView:(id)arg1 heightConstraintForLayout:(id /* block */)arg2;
- (id)backingController;
- (id)buttonTray;
- (id /* block */)constraintForLayoutFactory;
- (id)contentView;
- (long long)contentViewLayout;
- (bool)enableStickyHeader;
- (id)headerView;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)localDetailText;
- (id)localImage;
- (id)localTitle;
- (id)mainContentSubview;
- (id)outerContentView;
- (void)resetLayoutTo:(long long)arg1;
- (void)setBackingController:(id)arg1;
- (void)setConstraintForLayoutFactory:(id /* block */)arg1;
- (void)setEnableStickyHeader:(bool)arg1;
- (void)setLocalDetailText:(id)arg1;
- (void)setLocalImage:(id)arg1;
- (void)setLocalTitle:(id)arg1;
- (void)setMainContentSubview:(id)arg1;
- (void)setOuterContentView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
