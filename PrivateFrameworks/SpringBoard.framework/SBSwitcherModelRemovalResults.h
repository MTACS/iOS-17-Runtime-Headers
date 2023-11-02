
@interface SBSwitcherModelRemovalResults : NSObject {
    NSMutableDictionary * _appLayoutToAction;
    NSMutableDictionary * _appLayoutToReplacement;
    NSMutableSet * _appLayouts;
    NSMutableDictionary * _displayItemToHide;
}

@property (nonatomic, readonly, copy) NSArray *appLayouts;

- (void).cxx_destruct;
- (id)appLayouts;
- (void)executeActionForAppLayout:(id)arg1;
- (id)init;
- (void)removeAppLayout:(id)arg1;
- (id)replacementAppLayoutForAppLayout:(id)arg1;
- (void)setAction:(id /* block */)arg1 forAppLayout:(id)arg2;
- (void)setHide:(bool)arg1 forDisplayItem:(id)arg2;
- (void)setReplacementAppLayout:(id)arg1 forAppLayout:(id)arg2;
- (bool)willHideDisplayItem:(id)arg1;

@end
