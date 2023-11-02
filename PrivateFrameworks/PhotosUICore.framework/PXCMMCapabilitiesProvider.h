
@interface PXCMMCapabilitiesProvider : PXObservable <CPLStatusDelegate, PXSettingsKeyObserver> {
    long long  _capabilities;
    CPLStatus * _cplStatus;
    bool  _isObserving;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly) long long capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_handleCapabilities:(long long)arg1 cplStatus:(id)arg2 permanentlyUnavailable:(bool)arg3;
- (void)_updateCapabilities;
- (long long)capabilities;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)statusDidChange:(id)arg1;

@end
