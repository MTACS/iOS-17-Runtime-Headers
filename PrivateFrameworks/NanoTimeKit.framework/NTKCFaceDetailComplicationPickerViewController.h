
@interface NTKCFaceDetailComplicationPickerViewController : UITableViewController <NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKPeopleComplicationPickerViewControllerDelegate> {
    NTKCFaceDetailComplicationCellProvider * _cellProvider;
    UITableViewDiffableDataSource * _dataSource;
    <NTKCFaceDetailComplicationPickerViewControllerDelegate> * _delegate;
    bool  _hasDoneInitialScrollToItem;
    NSIndexPath * _indexPathToScrollToAfterLayout;
    <NTKComplicationPickerListProvider> * _listProvider;
    NSString * _slot;
    NTKFaceSlotComplicationTopLevelListProvider * _topLevelListProvider;
}

@property (nonatomic, retain) NTKCFaceDetailComplicationCellProvider *cellProvider;
@property (nonatomic, retain) UITableViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailComplicationPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDoneInitialScrollToItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSIndexPath *indexPathToScrollToAfterLayout;
@property (nonatomic, readonly) <NTKComplicationPickerListProvider> *listProvider;
@property (nonatomic, readonly) NSString *slot;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NTKFaceSlotComplicationTopLevelListProvider *topLevelListProvider;

- (void).cxx_destruct;
- (void)_configureWithSlot:(id)arg1 listProvider:(id)arg2 selectedComplication:(id)arg3;
- (id)cellProvider;
- (id)dataSource;
- (id)delegate;
- (id)detailViewControllerForSectionInfo:(id)arg1;
- (void)faceDetailComplicationPickerViewController:(id)arg1 didSelectComplication:(id)arg2;
- (bool)hasDoneInitialScrollToItem;
- (id)indexPathToScrollToAfterLayout;
- (id)initWithFace:(id)arg1 slot:(id)arg2 selectedComplication:(id)arg3;
- (id)initWithSlot:(id)arg1 listProvider:(id)arg2 title:(id)arg3 selectedComplication:(id)arg4;
- (id)listProvider;
- (void)peopleComplicationPickerViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)setCellProvider:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasDoneInitialScrollToItem:(bool)arg1;
- (void)setIndexPathToScrollToAfterLayout:(id)arg1;
- (id)slot;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)topLevelListProvider;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
