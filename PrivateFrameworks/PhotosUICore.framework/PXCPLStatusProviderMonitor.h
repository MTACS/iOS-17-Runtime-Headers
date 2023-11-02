
@interface PXCPLStatusProviderMonitor : PXObservable <PXChangeObserver> {
    PHPhotoLibrary * _photoLibrary;
    PXCPLPhotoLibrarySource * _photoLibrarySource;
    PXObservable<PXCPLStatusProvider> * _statusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PXObservable<PXCPLStatusProvider> *statusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateStatusProvider;
- (void)dealloc;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)photoLibrary;
- (void)setStatusProvider:(id)arg1;
- (id)statusProvider;

@end
