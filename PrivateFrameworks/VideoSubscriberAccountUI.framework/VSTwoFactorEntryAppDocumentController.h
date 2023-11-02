
@interface VSTwoFactorEntryAppDocumentController : VSAppDocumentController <VSTwoFactorEntryViewModelDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_newViewModel;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (bool)_updateTwoFactorEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (bool)_updateViewModel:(id)arg1 error:(id*)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)twoFactorEntryViewModel:(id)arg1 didPressButtonAtIndex:(unsigned long long)arg2;

@end
