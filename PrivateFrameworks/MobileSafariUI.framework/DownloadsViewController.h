
@interface DownloadsViewController : SFPopoverSizingTableViewController <DownloadTableViewCellDelegate, UITableViewDragDelegate_Private> {
    _SFDownloadManager * _downloadManager;
    <DownloadOpenHandler> * _downloadOpenHandler;
    NSMutableArray * _downloads;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <DownloadOpenHandler> *downloadOpenHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)tableViewCellForSizeEstimation;

- (void).cxx_destruct;
- (void)_clearAllDownloads;
- (void)_dismiss;
- (void)_downloadsDidChange:(id)arg1;
- (long long)_tableView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateDoneButton;
- (void)cancelDownload:(id)arg1;
- (id)downloadOpenHandler;
- (id)initWithStyle:(long long)arg1;
- (long long)maximumNumberOfRows;
- (long long)minimumNumberOfRows;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)quickLookTransitionViewForDownload:(id)arg1;
- (void)resumeDownload:(id)arg1;
- (void)revealDownload:(id)arg1;
- (bool)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
- (void)setDownloadOpenHandler:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 dragPreviewParametersForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (id)tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
