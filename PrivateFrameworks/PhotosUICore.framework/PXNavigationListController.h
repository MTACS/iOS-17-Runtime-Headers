
@interface PXNavigationListController : UIViewController <PXAssetCollectionActionPerformerDelegate, PXNavigationListDataSectionManagerObserver, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDropDelegate> {
    NSMutableDictionary * _cachedSymbolAttributedStrings;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    double  _currentContentHeight;
    PXNavigationListDataSection * _dataSection;
    PXNavigationListDataSectionManager * _dataSectionManager;
    UIFont * _detailTextLabelFont;
    NSDate * _firstPreloadCacheStartTime;
    double  _layoutWidth;
    UITableViewCell * _measuringCell;
    UIImage * _measuringImage;
    NSMutableSet * _queuedCacheKeys;
    NSMutableDictionary * _rowHeightCache;
    NSUserActivity * _siriActionActivity;
    UITableView * _tableView;
    UIFont * _textLabelFont;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, readonly) PXNavigationListDataSectionManager *dataSectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, retain) NSUserActivity *siriActionActivity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

+ (id)_rowHeightCachingQueue;
+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 existingAssetsFetchResult:(id)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
+ (id)viewControllerLog;

- (void).cxx_destruct;
- (id)_assetCollectionAtIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1 forListItem:(id)arg2 textColor:(id)arg3;
- (double)_contentHeightForCellWithWidth:(double)arg1 listItem:(id)arg2;
- (double)_contentHeightForWidth:(double)arg1 dataSection:(id)arg2;
- (id)_detailTextLabelFont;
- (void)_finishedAllPreloadTasks;
- (double)_insetWidth;
- (id)_navigateTolistItem:(id)arg1 animated:(bool)arg2;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_preloadRowHeightCache;
- (void)_preloadRowHeightsForAllValidItems;
- (void)_reportContentHeightDidChangeIfNecessary;
- (void)_resetCachedHeight;
- (void)_resetCachedMeasuringCell;
- (void)_resetFonts;
- (bool)_skipPreloadTaskIfNecessary;
- (void)_tableView:(id)arg1 updateCellSeparatorStyle:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_textLabelFont;
- (void)_updateDataSection;
- (bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)contentHeightDidChange;
- (double)contentHeightForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)dataSectionManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSectionManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)secondaryAttributedTextForGlyphName:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSiriActionActivity:(id)arg1;
- (id)siriActionActivity;
- (id)tableView;
- (bool)tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)undoManagerForActionPerformer:(id)arg1;

@end
