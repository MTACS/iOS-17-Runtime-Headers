
@interface EKEditItemViewController : UIViewController <EKEditItemViewControllerProtocol, EKViewControllerRemoteUIProtocol> {
    <EKEditItemViewControllerDelegate> * _editDelegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    bool  _modal;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    <EKViewControllerRemoteUIDelegate> * _remoteUIDelegate;
    bool  _showsDoneButton;
    <EKStyleProvider> * _styleProvider;
    unsigned long long  _subitem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool modal;
@property (nonatomic) bool presentModally;
@property (nonatomic) <EKViewControllerRemoteUIDelegate> *remoteUIDelegate;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) unsigned long long subitem;
@property (readonly) Class superclass;
@property (nonatomic) bool useCustomBackButton;

+ (id)preferredViewControllerForPresentationsFromViewController:(id)arg1;

- (void).cxx_destruct;
- (void)_saveAndDismissWithForce:(bool)arg1;
- (void)cancel;
- (void)didReceiveMemoryWarning;
- (id)editDelegate;
- (bool)fitsPopoverWhenKeyboardActive;
- (bool)hidesBottomBarWhenPushed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (double)marginForTableView:(id)arg1;
- (bool)modal;
- (void)popIfNonModal;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)remoteUIDelegate;
- (void)saveAndDismiss;
- (void)saveAndDismissWithExtremePrejudice;
- (void)setCell:(id)arg1 checked:(bool)arg2;
- (void)setEditDelegate:(id)arg1;
- (void)setModal:(bool)arg1;
- (void)setRemoteUIDelegate:(id)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setSubitem:(unsigned long long)arg1;
- (bool)showsDoneButton;
- (unsigned long long)subitem;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (bool)validateAllowingAlert:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
