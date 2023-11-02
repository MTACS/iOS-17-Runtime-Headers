
@interface HUFaceRecognitionAddPersonViewController : HUSearchableItemTableViewController {
    HUFaceRecognitionAddPersonItemManager * _addPersonItemManager;
    <HUFaceRecognitionAddPersonViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
}

@property (nonatomic, readonly) HUFaceRecognitionAddPersonItemManager *addPersonItemManager;
@property (nonatomic) <HUFaceRecognitionAddPersonViewControllerDelegate> *delegate;
@property (nonatomic, readonly) UIBarButtonItem *doneButton;

- (void).cxx_destruct;
- (void)_donePressed:(id)arg1;
- (id)addPersonItemManager;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)doneButton;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4;
- (id)initWithSignificantEvent:(id)arg1 home:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateForSearch;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
