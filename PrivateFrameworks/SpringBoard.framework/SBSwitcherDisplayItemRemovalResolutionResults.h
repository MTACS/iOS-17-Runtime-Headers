
@interface SBSwitcherDisplayItemRemovalResolutionResults : NSObject {
    NSMutableDictionary * _displayItemToActions;
}

@property (nonatomic, readonly, copy) NSArray *displayItems;

- (void).cxx_destruct;
- (id)actionsForDisplayItem:(id)arg1;
- (id)displayItems;
- (void)setActions:(id)arg1 forDisplayItem:(id)arg2;

@end
