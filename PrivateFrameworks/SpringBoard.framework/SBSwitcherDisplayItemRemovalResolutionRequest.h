
@interface SBSwitcherDisplayItemRemovalResolutionRequest : NSObject {
    NSMapTable * _displayItemToRemovalIntentType;
}

@property (nonatomic, readonly, copy) NSArray *displayItems;

- (void).cxx_destruct;
- (id)displayItems;
- (long long)removalIntentTypeForDisplayItem:(id)arg1;
- (void)setRemovalIntentType:(long long)arg1 forDisplayItem:(id)arg2;

@end
