
@interface PXStackedDataSectionManager : PXDataSectionManager <PXDataSectionManagerEnabling> {
    bool  _alwaysContainsObjects;
    bool  _enabled;
    PXDataSectionEnablementForwarder * _enablementForwarder;
}

@property (nonatomic) bool alwaysContainsObjects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) PXDataSectionEnablementForwarder *enablementForwarder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_updateDataSectionIfNecessary;
- (bool)alwaysContainsObjects;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)childDataSectionManagerForObjectAtIndex:(long long)arg1 localIndex:(long long*)arg2;
- (id)createDataSection;
- (id)enablementForwarder;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (bool)isDataSectionEmpty;
- (bool)isEnabled;
- (void)setAlwaysContainsObjects:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablementForwarder:(id)arg1;

@end
