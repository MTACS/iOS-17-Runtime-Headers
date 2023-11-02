
@interface STUIStatusBarTestItem : STUIStatusBarItem {
    STUIStatusBarAnimation * _additionAnimation;
    STUIStatusBarAnimation * _otherAnimation;
    NSArray * _overrideDependentEntryKeys;
    STUIStatusBarAnimation * _removalAnimation;
    NSMutableDictionary * _stringViews;
}

@property (nonatomic, retain) STUIStatusBarAnimation *additionAnimation;
@property (nonatomic, retain) STUIStatusBarAnimation *otherAnimation;
@property (nonatomic, copy) NSArray *overrideDependentEntryKeys;
@property (nonatomic, retain) STUIStatusBarAnimation *removalAnimation;
@property (nonatomic, retain) NSMutableDictionary *stringViews;

+ (id)displayIdentifierForIndex:(long long)arg1 displayIndex:(long long)arg2;
+ (id)identifierForIndex:(long long)arg1;

- (void).cxx_destruct;
- (id)_defaultStringFromDisplayIdentifier:(id)arg1;
- (id)additionAnimation;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (id)otherAnimation;
- (id)overrideDependentEntryKeys;
- (id)removalAnimation;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)setAdditionAnimation:(id)arg1;
- (void)setOtherAnimation:(id)arg1;
- (void)setOverrideDependentEntryKeys:(id)arg1;
- (void)setRemovalAnimation:(id)arg1;
- (void)setStringViews:(id)arg1;
- (id)stringViews;
- (id)viewForIdentifier:(id)arg1;

@end
