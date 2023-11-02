
@interface PXFeatureSpecManager : PXObservable <PXChangeObserver> {
    PXExtendedTraitCollection * _extendedTraitCollection;
    unsigned long long  _options;
    PXFeatureSpec * _spec;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long defaultChangesToUpdateFor;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) PXFeatureSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setSpec:(id)arg1;
- (void)_updateSpec;
- (id)createSpec;
- (unsigned long long)defaultChangesToUpdateFor;
- (id)extendedTraitCollection;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (void)invalidateSpec;
- (id)mutableChangeObject;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (unsigned long long)options;
- (bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (id)spec;
- (Class)specClass;

@end
