
@interface HUEnergyDashboardItemModuleController : HUItemModuleController {
    void delegate;
    void layoutManager;
}

- (void).cxx_destruct;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithModule:(id)arg1;

@end
