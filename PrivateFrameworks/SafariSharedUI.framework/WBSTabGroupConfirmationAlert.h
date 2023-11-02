
@interface WBSTabGroupConfirmationAlert : UIAlertController {
    bool  _automaticallyConfirm;
    NSString * _confirmButtonTitle;
    <WBSTabGroupConfirmationAlertDelegate> * _delegate;
    NSString * _message;
    id /* block */  _resultHandler;
    long long  _role;
    WBTabGroup * _tabGroup;
    WBTabGroupManager * _tabGroupManager;
    NSString * _title;
}

@property (nonatomic) <WBSTabGroupConfirmationAlertDelegate> *delegate;
@property (nonatomic) long long role;
@property (nonatomic, readonly) WBTabGroup *tabGroup;
@property (nonatomic, readonly) WBTabGroupManager *tabGroupManager;

+ (id)deleteConfirmationAlertWithTabGroup:(id)arg1 manager:(id)arg2 delegate:(id)arg3;

- (void).cxx_destruct;
- (void)_configureAlert;
- (void)_handleResult:(bool)arg1;
- (void)_initializeStringsForDeleteConfirmation;
- (id)_representativeHost;
- (id)delegate;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)presentFromViewController:(id)arg1 withResultHandler:(id /* block */)arg2;
- (long long)role;
- (void)setDelegate:(id)arg1;
- (void)setRole:(long long)arg1;
- (id)tabGroup;
- (id)tabGroupManager;

@end
