
@interface VSCredentialEntryAppDocumentController : VSAppDocumentController <VSCredentialEntryViewModelDelegate, VSIKItemGroupDelegate> {
    VSIKItemGroupElement * _pickerElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSIKItemGroupElement *pickerElement;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_credentialEntryViewModelWithViewModel:(id)arg1;
- (id)_newViewModel;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (bool)_updateCredentialEntryViewModel:(id)arg1 error:(id*)arg2;
- (bool)_updateCredentialEntryViewModel:(id)arg1 withTemplate:(id)arg2 error:(id*)arg3;
- (bool)_updateViewModel:(id)arg1 error:(id*)arg2;
- (void)itemGroup:(id)arg1 selectedItemIndexDidChange:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickerElement;
- (void)setPickerElement:(id)arg1;
- (void)viewModel:(id)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (void)viewModel:(id)arg1 pickerDidSelectRow:(unsigned long long)arg2;

@end
