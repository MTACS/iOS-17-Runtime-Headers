
@interface PXOutlineDataSectionManager : PXDataSectionManager {
    NSDictionary * _dataSectionManagersByDataSectionObjects;
    <PXOutlineDataSectionManagerDelegate> * _delegate;
}

@property (nonatomic) <PXOutlineDataSectionManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_changeDetailsForNewDataSection:(id)arg1;
- (id)changeDetailsForChangedChildDataSectionManager:(id)arg1 childChangeDetails:(id)arg2;
- (id)changeDetailsForChildDataSectionManagersChangeDetails:(id)arg1;
- (id)childDataSectionManagerForOutlineObject:(id)arg1;
- (id)createDataSection;
- (id)delegate;
- (void)rearrangeSectionContent;
- (void)setDelegate:(id)arg1;
- (bool)shouldInvalidateDataSectionForChildDataSectionManager:(id)arg1 changeDescriptor:(unsigned long long)arg2;

@end
