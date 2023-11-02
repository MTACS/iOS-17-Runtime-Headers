
@interface HUStatusItemModuleController : HUItemModuleController

+ (id)_layoutOptionsForEnvironment:(id)arg1;

- (id)_defaultCellLayoutOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)cellLayoutOptions;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;

@end
