
@interface VUIMPLibraryShelvesDataSource : VUILibraryShelvesDataSource <VUILibraryDataSourceDelegate> {
    NSMutableArray * _fetchedDataSources;
    VUIMediaLibrary * _mediaLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *fetchedDataSources;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRentalsUpdateNotificationObserver;
- (id)_dataSourceForShelves;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_updateRentalShelf;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)dealloc;
- (id)fetchedDataSources;
- (id)initWithValidShelfTypes:(id)arg1 forMediaLibrary:(id)arg2;
- (id)mediaLibrary;
- (void)setFetchedDataSources:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)startFetch;

@end
