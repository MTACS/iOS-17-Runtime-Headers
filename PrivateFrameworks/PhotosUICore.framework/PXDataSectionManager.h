
@interface PXDataSectionManager : PXObservable <PXDataSectionManagerChangeObserver> {
    PXArrayChangeDetails * _changeDetailsFromPreviousDataSection;
    NSArray * _childDataSectionManagers;
    PXDataSection * _dataSection;
    <NSObject><NSCopying> * _outlineObject;
    PXDataSection * _previousDataSection;
    long long  _previousDataSectionIdentifier;
}

@property (nonatomic, readonly) bool allowsEmptyDataSection;
@property (nonatomic, readonly) PXArrayChangeDetails *changeDetailsFromPreviousDataSection;
@property (nonatomic, copy) NSArray *childDataSectionManagers;
@property (nonatomic, readonly) PXDataSection *dataSection;
@property (getter=isDataSectionEmpty, nonatomic, readonly) bool dataSectionEmpty;
@property (nonatomic, readonly) PXDataSection *dataSectionIfCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSObject><NSCopying> *outlineObject;
@property (nonatomic, readonly) PXDataSection *previousDataSection;
@property (nonatomic, readonly) long long previousDataSectionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_registerAsChangeObserverForDataSectionManagers:(id)arg1;
- (void)_setDataSection:(id)arg1 changeDetails:(id)arg2;
- (void)_unregisterAsChangeObserverForDataSectionManagers:(id)arg1;
- (bool)allowsEmptyDataSection;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)changeDetailsFromPreviousDataSection;
- (void)childDataSectionManager:(id)arg1 didChangeDataSectionWithChangeDetails:(id)arg2;
- (id)childDataSectionManagers;
- (id)createDataSection;
- (id)dataSection;
- (id)dataSectionIfCreated;
- (id)init;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (bool)isDataSectionEmpty;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)outlineObject;
- (id)previousDataSection;
- (long long)previousDataSectionIdentifier;
- (void)setChangeProcessingPaused:(bool)arg1 forReason:(id)arg2;
- (void)setChildDataSectionManagers:(id)arg1;
- (void)setOutlineObject:(id)arg1;
- (bool)shouldInvalidateDataSectionForChildDataSectionManager:(id)arg1 changeDescriptor:(unsigned long long)arg2;
- (void)updateDataSectionWithChangeDetails:(id)arg1;

@end
