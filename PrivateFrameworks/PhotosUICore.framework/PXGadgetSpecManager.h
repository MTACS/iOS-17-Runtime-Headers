
@interface PXGadgetSpecManager : PXObservable <PXChangeObserver, PXMutableGadgetSpecManager> {
    PXGadgetSpec * _currentGadgetSpec;
    Class  _gadgetSpecClass;
    long long  _scrollAxis;
    PXExtendedTraitCollection * _traitCollection;
    NSHashTable * _updatedGadgets;
}

@property (nonatomic, retain) PXGadgetSpec *currentGadgetSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) Class gadgetSpecClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long scrollAxis;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXExtendedTraitCollection *traitCollection;
@property (nonatomic, retain) NSHashTable *updatedGadgets;

- (void).cxx_destruct;
- (void)_extendedTraitCollection:(id)arg1 didChange:(unsigned long long)arg2;
- (id)currentGadgetSpec;
- (Class)gadgetSpecClass;
- (id)initWithGadgetSpecClass:(Class)arg1 scrollAxis:(long long)arg2 traitCollection:(id)arg3;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performChanges:(id /* block */)arg1;
- (long long)scrollAxis;
- (void)setCurrentGadgetSpec:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setUpdatedGadgets:(id)arg1;
- (id)traitCollection;
- (void)updateGadgetDataSourceToSpecIfNeeded:(id)arg1;
- (id)updatedGadgets;

@end
