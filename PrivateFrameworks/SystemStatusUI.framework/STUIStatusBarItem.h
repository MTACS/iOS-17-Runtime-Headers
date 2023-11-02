
@interface STUIStatusBarItem : NSObject <BSDebugDescriptionProviding> {
    NSMutableDictionary * _displayItems;
    STUIStatusBarIdentifier * _identifier;
    bool  _needsUpdate;
    STUIStatusBar * _statusBar;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *dependentEntryKeys;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *displayItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STUIStatusBarIdentifier *identifier;
@property (nonatomic, readonly) bool needsUpdate;
@property (readonly) STUIStatusBar *statusBar;
@property (readonly) Class superclass;

+ (id)createItemForIdentifier:(id)arg1 statusBar:(id)arg2;
+ (id)defaultDisplayIdentifier;
+ (id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2;
+ (id)displayItemIdentifierFromString:(id)arg1;
+ (id)identifier;
+ (Class)itemClassForIdentifier:(id)arg1;
+ (id)itemIdentifierForDisplayItemIdentifier:(id)arg1;
+ (id)itemIdentifierFromString:(id)arg1;

- (void).cxx_destruct;
- (id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)dependentEntryKeys;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItemForIdentifier:(id)arg1;
- (id)displayItems;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (bool)needsUpdate;
- (id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2;
- (void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setDisplayItems:(id)arg1;
- (void)setNeedsUpdate;
- (id)statusBar;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)viewForIdentifier:(id)arg1;

@end
