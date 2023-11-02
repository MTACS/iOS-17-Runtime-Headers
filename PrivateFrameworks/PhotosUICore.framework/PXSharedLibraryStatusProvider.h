
@interface PXSharedLibraryStatusProvider : PXObservable <PXMutableSharedLibraryStatusProvider, PXSectionedDataSourceManagerObserver, PXSettingsKeyObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deferredInitializationLock;
    <PXSharedLibrary> * _exiting;
    PXSharedLibraryDataSourceManager * _exitingDataSourceManager;
    bool  _hasPreview;
    bool  _hasSharedLibrary;
    <PXSharedLibrary> * _invitation;
    PXSharedLibraryDataSourceManager * _invitationsDataSourceManager;
    PHPhotoLibrary * _photoLibrary;
    <PXSharedLibrary> * _preview;
    PXSharedLibraryDataSourceManager * _previewDataSourceManager;
    <PXSharedLibrary> * _sharedLibrary;
    PXSharedLibraryDataSourceManager * _sharedLibraryDataSourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PXSharedLibrary> *exiting;
@property (nonatomic, readonly) bool hasPreview;
@property (nonatomic, readonly) bool hasSharedLibrary;
@property (nonatomic, readonly) bool hasSharedLibraryOrPreview;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXSharedLibrary> *invitation;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) <PXSharedLibrary> *preview;
@property (nonatomic, readonly) <PXSharedLibrary> *sharedLibrary;
@property (nonatomic, readonly) <PXSharedLibrary> *sharedLibraryOrPreview;
@property (readonly) Class superclass;

+ (id)sharedLibraryStatusProviderWithPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)_configureExitingDataSourceManager;
- (void)_configureInvitationDataSourceManager;
- (void)_configurePreviewDataSourceManager;
- (void)_configureSharedLibraryDataSourceManager;
- (void)_fullfillDeferredInitializationIfNecessary;
- (void)_initializeDataSourceManagers;
- (void)_performDeferredInitializationIfNecessary;
- (id)_statusDescription;
- (void)_updateExitingWithChangeNotification:(bool)arg1;
- (void)_updateInvitationWithChangeNotification:(bool)arg1;
- (void)_updatePreviewWithChangeNotification:(bool)arg1;
- (void)_updateSharedLibraryWithChangeNotification:(bool)arg1;
- (id)exiting;
- (id)fetchExiting;
- (id)fetchPreview;
- (id)fetchSharedLibrary;
- (void)fetchSharedLibraryForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasPreview;
- (bool)hasSharedLibrary;
- (bool)hasSharedLibraryOrPreview;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1 deferInitialization:(bool)arg2 initialHasPreview:(bool)arg3 initialHasSharedLibrary:(bool)arg4;
- (id)invitation;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)photoLibrary;
- (id)preview;
- (void)setExiting:(id)arg1;
- (void)setHasPreview:(bool)arg1;
- (void)setHasSharedLibrary:(bool)arg1;
- (void)setInvitation:(id)arg1;
- (void)setPreview:(id)arg1;
- (void)setSharedLibrary:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)sharedLibrary;
- (id)sharedLibraryOrPreview;

@end
