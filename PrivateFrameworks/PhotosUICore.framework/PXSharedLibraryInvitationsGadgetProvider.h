
@interface PXSharedLibraryInvitationsGadgetProvider : PXGadgetProvider <PXChangeObserver> {
    bool  _didGenerateGadgets;
    <PXSharedLibrary> * _invitation;
    PXSharedLibraryStatusProvider * _statusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithSharedLibraryStatusProvider:(id)arg1;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)statusProvider;

@end
