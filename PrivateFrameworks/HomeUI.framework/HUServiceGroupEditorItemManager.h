
@interface HUServiceGroupEditorItemManager : HFItemManager {
    HFItem * _instructionsItem;
    unsigned long long  _mode;
    HFStaticItem * _nameAndIconItem;
    HFStaticItem * _serviceGridItem;
    HFServiceGroupBuilder * _serviceGroupBuilder;
}

@property (nonatomic, retain) HFItem *instructionsItem;
@property (nonatomic, readonly) long long instructionsSectionIndex;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) HFStaticItem *nameAndIconItem;
@property (nonatomic, retain) HFStaticItem *serviceGridItem;
@property (nonatomic, readonly) long long serviceGridSectionIndex;
@property (nonatomic, readonly) HFServiceGroupBuilder *serviceGroupBuilder;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)currentSectionIdentifiers;
- (id)currentSectionIdentifiersSnapshot;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithServiceGroupBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (id)instructionsItem;
- (long long)instructionsSectionIndex;
- (unsigned long long)mode;
- (id)nameAndIconItem;
- (id)serviceGridItem;
- (long long)serviceGridSectionIndex;
- (id)serviceGroupBuilder;
- (void)setInstructionsItem:(id)arg1;
- (void)setNameAndIconItem:(id)arg1;
- (void)setServiceGridItem:(id)arg1;

@end
