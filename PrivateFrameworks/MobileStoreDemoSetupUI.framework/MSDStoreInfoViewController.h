
@interface MSDStoreInfoViewController : UIViewController {
    <MSDStoreInfoViewControllerDelegate> * _delegate;
    MSDStoreInfo * _storeInfo;
}

@property (nonatomic, retain) <MSDStoreInfoViewControllerDelegate> *delegate;
@property (nonatomic, retain) MSDStoreInfo *storeInfo;

- (void).cxx_destruct;
- (id)_boldConfiguration;
- (void)_close:(id)arg1;
- (void)_confirm:(id)arg1;
- (void)_showConfirmationAlert;
- (void)_showStoreConfirmationAlertWithCode:(id)arg1;
- (id)_stackedCancelButton;
- (id)_stackedLabelWithTitle:(id)arg1 andDescription:(id)arg2;
- (id)_stackedStoreName:(id)arg1 withIcon:(id)arg2 andIconColor:(id)arg3;
- (id)delegate;
- (id)initWithStoreInfo:(id)arg1 andDelegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setStoreInfo:(id)arg1;
- (id)storeInfo;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
