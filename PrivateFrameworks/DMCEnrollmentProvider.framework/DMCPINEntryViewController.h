
@interface DMCPINEntryViewController : DevicePINController <DMCDismissalAwareViewController, UIAdaptivePresentationControllerDelegate> {
    <DevicePINControllerDelegate> * _delegate;
    NSString * _descriptionText;
    bool  _inProgress;
    UIBarButtonItem * _rightBarButtonItem;
    unsigned long long  _style;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DevicePINControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inProgress;
@property (nonatomic, retain) UIBarButtonItem *rightBarButtonItem;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_titleFont;
- (void)_updateStyle;
- (id)delegate;
- (id)descriptionText;
- (bool)inProgress;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)leftBarButtonTapped:(id)arg1;
- (void)loadView;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (id)rightBarButtonItem;
- (void)setDelegate:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setInProgress:(bool)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)stringsBundle;
- (unsigned long long)style;
- (id)titleLabel;
- (void)viewControllerHasBeenDismissed;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
