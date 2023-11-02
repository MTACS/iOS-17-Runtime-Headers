
@interface _SFSettingsAlertController : UIViewController <SFPopoverSourceInfoProviding> {
    <_SFSettingsAlertControllerDelegate> * _delegate;
    UINavigationController * _navigationController;
    long long  _provenance;
    bool  _usesReverseOrder;
}

@property (nonatomic, readonly) _SFSettingsAlertContentController *_rootContentController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFSettingsAlertControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _SFSettingsAlertItem *focusedItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic) long long provenance;
@property (nonatomic, readonly) <_SFPopoverSourceInfo> *safari_popoverSourceInfo;
@property (readonly) Class superclass;
@property (nonatomic) bool usesReverseOrder;

- (void).cxx_destruct;
- (void)_pushSubItemsForGroup:(id)arg1;
- (id)_rootContentController;
- (void)addDivider;
- (void)addItem:(id)arg1;
- (id)delegate;
- (id)focusedItem;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)items;
- (id)presentingViewController;
- (long long)provenance;
- (void)pushViewController:(id)arg1;
- (void)removeAllItems;
- (void)resizeMenu;
- (id)safari_popoverSourceInfo;
- (void)setDelegate:(id)arg1;
- (void)setFocusedItem:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProvenance:(long long)arg1;
- (void)setUsesReverseOrder:(bool)arg1;
- (bool)usesReverseOrder;
- (void)viewDidLoad;

@end
