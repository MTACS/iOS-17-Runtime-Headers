
@interface PhotosUICore.PhotosDetailsLocationSearchDataSource : NSObject <PXInfoProvider, PXInfoUpdaterObserver, PXPhotosDetailsLocationSearchDataSource> {
    void $__lazy_storage_$_infoUpdater;
    void assets;
    void canRemoveLocation;
    void completion;
    void delegate;
    void searchQuery;
    void suggester;
    void undoManagerProvider;
}

@property (nonatomic) <PXPhotosDetailsLocationSearchDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (id)init;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
