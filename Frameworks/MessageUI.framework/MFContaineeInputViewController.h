
@interface MFContaineeInputViewController : UIInputViewController {
    bool  _allowsSelfSizing;
    UIViewController * _contentViewController;
    NSLayoutConstraint * _heightConstraint;
}

@property (nonatomic) bool allowsSelfSizing;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;

- (void).cxx_destruct;
- (void)_updateContentViewControllerHeight;
- (bool)allowsSelfSizing;
- (id)contentViewController;
- (id)heightConstraint;
- (id)initWithContentViewController:(id)arg1;
- (void)setAllowsSelfSizing:(bool)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
