
@interface EKEventGenericDetailViewControllerOOPWrapperImpl : UIViewController <EKEditItemViewControllerProtocol> {
    EKEvent * _event;
    NSArray * _leftBarButtonActions;
    NSArray * _leftBarButtonItems;
    EKUIEmailCompositionManager * _messageSendingManager;
    NSArray * _rightBarButtonActions;
    NSArray * _rightBarButtonItems;
    _TtC10EventKitUI41EKEventGenericDetailViewControllerOOPImpl * _vc;
    NSString * _viewID;
}

@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, retain) NSArray *leftBarButtonActions;
@property (nonatomic, retain) NSArray *leftBarButtonItems;
@property (nonatomic, retain) EKUIEmailCompositionManager *messageSendingManager;
@property (nonatomic, retain) UIColor *oopContentBackgroundColor;
@property (nonatomic) bool presentModally;
@property (nonatomic, retain) NSArray *rightBarButtonActions;
@property (nonatomic, retain) NSArray *rightBarButtonItems;
@property (nonatomic) bool useCustomBackButton;
@property (nonatomic, retain) _TtC10EventKitUI41EKEventGenericDetailViewControllerOOPImpl *vc;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 viewID:(id)arg2 event:(id)arg3 leftBarButtonActions:(id)arg4 rightBarButtonActions:(id)arg5;
- (id)initWithTitle:(id)arg1 viewID:(id)arg2 leftBarButtonActions:(id)arg3 rightBarButtonActions:(id)arg4;
- (id)leftBarButtonActions;
- (id)leftBarButtonItems;
- (void)leftBarButtonTapped:(id)arg1;
- (id)messageSendingManager;
- (id)oopContentBackgroundColor;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)rightBarButtonActions;
- (id)rightBarButtonItems;
- (void)rightBarButtonTapped:(id)arg1;
- (void)setLeftBarButtonActions:(id)arg1;
- (void)setLeftBarButtonItems:(id)arg1;
- (void)setMessageSendingManager:(id)arg1;
- (void)setOopContentBackgroundColor:(id)arg1;
- (void)setRightBarButtonActions:(id)arg1;
- (void)setRightBarButtonItems:(id)arg1;
- (void)setVc:(id)arg1;
- (id)vc;
- (void)viewDidLoad;

@end
