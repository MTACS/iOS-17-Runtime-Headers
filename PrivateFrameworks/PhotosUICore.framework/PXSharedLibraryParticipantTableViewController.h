
@interface PXSharedLibraryParticipantTableViewController : UITableViewController <PXPhotoRecipientViewControllerDelegate, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, UITableViewDataSource, UITableViewDelegate> {
    PXSharedLibraryParticipantDataSource * _dataSource;
    PXSharedLibraryParticipantDataSourceManager * _dataSourceManager;
    <PXSharedLibraryParticipantTableViewControllerDelegate> * _delegate;
    bool  _interactionEnabled;
    double  _tableViewHeight;
}

@property (nonatomic, readonly) bool canAddParticipants;
@property (nonatomic, retain) PXSharedLibraryParticipantDataSource *dataSource;
@property (nonatomic, readonly) PXSharedLibraryParticipantDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSharedLibraryParticipantTableViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInteractionEnabled, nonatomic) bool interactionEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tableViewHeight;

- (void).cxx_destruct;
- (void)_handleAddRecipient;
- (void)_updateAddButton;
- (void)_updateRowHeight;
- (void)_updateTableViewHeight;
- (bool)canAddParticipants;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)dataSource;
- (id)dataSourceManager;
- (id)delegate;
- (id)initWithDataSourceManager:(id)arg1;
- (bool)isInteractionEnabled;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photoRecipientViewController:(id)arg1 didCompleteWithRecipients:(id)arg2;
- (void)photoRecipientViewControllerDidCancel:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInteractionEnabled:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableViewHeight;
- (void)viewWillLayoutSubviews;

@end
