
@interface AKToolsListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _cellItemTypes;
    <AKToolsListViewControllerDelegate> * _delegate;
    bool  _isDeviceLocked;
    bool  _supportsImageDescriptionEditing;
    bool  _supportsOpacityEditing;
    UITableView * _tableView;
}

@property (nonatomic, copy) NSArray *cellItemTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKToolsListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDeviceLocked;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsImageDescriptionEditing;
@property (nonatomic) bool supportsOpacityEditing;
@property (nonatomic, retain) UITableView *tableView;

+ (id)defaultCellItemTypes;

- (void).cxx_destruct;
- (id)_buttonViewForImageDescription;
- (id)_buttonViewForLoupe;
- (id)_buttonViewForOpacity;
- (id)_buttonViewForShapes;
- (id)_buttonViewForSignature;
- (id)_buttonViewForText;
- (id)_buttonViewWithImage:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
- (bool)_canShowWhileLocked;
- (void)_reloadCellItemTypes;
- (void)_shapeButtonPressed:(id)arg1;
- (long long)_shapesCellIndexRow;
- (void)_updateDeviceLocked;
- (void)addRowView:(id)arg1 toCellView:(id)arg2;
- (id)cellItemTypes;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isDeviceLocked;
- (void)setCellItemTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsDeviceLocked:(bool)arg1;
- (void)setSupportsImageDescriptionEditing:(bool)arg1;
- (void)setSupportsOpacityEditing:(bool)arg1;
- (void)setTableView:(id)arg1;
- (bool)supportsImageDescriptionEditing;
- (bool)supportsOpacityEditing;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
