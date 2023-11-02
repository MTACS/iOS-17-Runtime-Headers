
@interface PKPaymentSetupTableViewController : UIViewController <PKPaymentSetupPresentationProtocol, UITableViewDataSource, UITableViewDelegate, _PKVisibilityBackdropViewDelegate> {
    double  _backdropWeight;
    _PKVisibilityBackdropView * _blurringView;
    bool  _clearsSelectionOnViewWillAppear;
    UIView * _containerView;
    long long  _context;
    PKPaymentSetupDockView * _dockView;
    PKHyperlinkTextView * _footerTextView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    bool  _keyboardVisible;
    bool  _moveFooterWithKeyboard;
    NSIndexPath * _selectedIndexPath;
    long long  _style;
    UITableView * _tableView;
    UITableViewController * _tableViewController;
}

@property (nonatomic) bool clearsSelectionOnViewWillAppear;
@property (nonatomic) long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentSetupDockView *dockView;
@property (nonatomic, copy) NSAttributedString *footerAttributedText;
@property (nonatomic, retain) PKHyperlinkTextView *footerTextView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool moveFooterWithKeyboard;
@property (nonatomic, readonly, copy) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_keyboardWillChange:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_updateLayoutForKeyboardAction:(id /* block */)arg1;
- (id)addFooterStyleAttributes:(id)arg1;
- (bool)clearsSelectionOnViewWillAppear;
- (long long)context;
- (void)dealloc;
- (id)dockView;
- (unsigned long long)edgesForExtendedLayout;
- (bool)extendedLayoutIncludesOpaqueBars;
- (id)footerAttributedText;
- (id)footerTextView;
- (id)initWithContext:(long long)arg1;
- (id)initWithStyle:(long long)arg1 context:(long long)arg2;
- (void)loadView;
- (bool)moveFooterWithKeyboard;
- (unsigned long long)paymentSetupMarker;
- (bool)paymentSetupMarkerRemovalIsInclusive;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedIndexPath;
- (void)setClearsSelectionOnViewWillAppear:(bool)arg1;
- (void)setContext:(long long)arg1;
- (void)setFooterAttributedText:(id)arg1;
- (void)setFooterTextView:(id)arg1;
- (void)setMoveFooterWithKeyboard:(bool)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;

@end
