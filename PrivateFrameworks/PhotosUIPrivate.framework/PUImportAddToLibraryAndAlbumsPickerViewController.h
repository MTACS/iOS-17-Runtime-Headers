
@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController <PXActionPerformerDelegate, PXCollectionsDataSourceManagerObserver> {
    PHCollection * _createdAlbum;
    PXPhotoKitCollectionsDataSource * _dataSource;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PXPhotoKitCollectionsDataSourceManagerConfiguration * _dataSourceManagerConfiguration;
    <PXImportAlbumPickerDelegate> * _delegate;
    bool  _needsDatasourceUpdate;
    PHPhotoLibrary * _photoLibrary;
    PHCollection * _selectedCollection;
}

@property (nonatomic, retain) PXPhotoKitCollectionsDataSource *dataSource;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXImportAlbumPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (unsigned long long)cellTypeForPosition:(id)arg1;
+ (long long)dataSourceOffset;
+ (id)dataSourceShiftedIndexPath:(id)arg1;

- (void).cxx_destruct;
- (void)_dismissPicker;
- (void)_updateDatasource;
- (id)_userCreatredAlbumsPhotoKitConfiguration;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)configureDataSourceManagerConfiguration:(id)arg1;
- (id)dataSource;
- (id)dataSourceManager;
- (id)dataSourceManagerConfiguration;
- (id)delegate;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (id)posterImageForCollection:(id)arg1 indexPath:(id)arg2 forCellType:(unsigned long long)arg3;
- (void)setDataSource:(id)arg1;
- (void)setDataSourceManager:(id)arg1;
- (void)setDataSourceManagerConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
