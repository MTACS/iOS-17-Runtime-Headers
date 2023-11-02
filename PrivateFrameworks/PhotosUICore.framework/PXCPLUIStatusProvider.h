
@interface PXCPLUIStatusProvider : PXObservable <PXChangeObserver> {
    PXCPLActionManager * _actionManager;
    NSDate * _currentDateForTesting;
    unsigned long long  _presentationStyle;
    PXCPLUIStatus * _status;
    PXObservable<PXCPLStatusProvider> * _statusProvider;
    PXCPLStatusProviderMonitor * _statusProviderMonitor;
}

@property (nonatomic, readonly) PXCPLActionManager *actionManager;
@property (nonatomic, copy) NSDate *currentDateForTesting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long presentationStyle;
@property (nonatomic, readonly) PXCPLUIStatus *status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_statusDidChange:(id)arg1;
- (void)_updateStatus;
- (void)_updateStatusProviderMonitor;
- (id)actionManager;
- (id)currentDateForTesting;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1 actionManager:(id)arg2;
- (id)initWithPhotoLibrary:(id)arg1 actionManager:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (id)initWithStatusProvider:(id)arg1 actionManager:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)presentationStyle;
- (void)setCurrentDateForTesting:(id)arg1;
- (id)status;

@end
