
@interface NTKPigmentEditOptionProvider : NSObject <NTKPigmentEditOptionStoreListener> {
    NSBundle * _bundle;
    NSString * _domain;
    NTKFace * _face;
    NTKPigmentEditOptionStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NTKFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableColorsForSlot:(id)arg1;
- (void)colorEditOptionStore:(id)arg1 didChangeForDomain:(id)arg2;
- (void)dealloc;
- (id)defaultColorOptionForSlot:(id)arg1;
- (id)face;
- (id)fulfilledOptionForOption:(id)arg1 slot:(id)arg2;
- (bool)hasAddableCollectionsForSlot:(id)arg1;
- (unsigned long long)indexOfOption:(id)arg1 slot:(id)arg2;
- (id)initWithDomain:(id)arg1 bundle:(id)arg2;
- (id)initWithFace:(id)arg1;
- (id)migratedOptionForInvalidOption:(id)arg1 slot:(id)arg2;
- (unsigned long long)numberOfOptionsForSlot:(id)arg1;
- (id)optionAtIndex:(unsigned long long)arg1 slot:(id)arg2;
- (void)setFace:(id)arg1;

@end
