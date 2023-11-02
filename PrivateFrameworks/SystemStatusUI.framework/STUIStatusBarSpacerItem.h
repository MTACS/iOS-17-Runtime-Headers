
@interface STUIStatusBarSpacerItem : STUIStatusBarItem

+ (id)randomDisplayIdentifier;

- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;

@end
