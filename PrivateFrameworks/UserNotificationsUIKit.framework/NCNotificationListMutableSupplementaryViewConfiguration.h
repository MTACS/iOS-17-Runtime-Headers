
@interface NCNotificationListMutableSupplementaryViewConfiguration : NCNotificationListSupplementaryViewConfiguration

@property (nonatomic, copy) NSArray *auxiliaryOptionActions;
@property (nonatomic, copy) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic) bool containsUnmanagedContent;
@property (nonatomic, copy) UIAction *defaultAction;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *groupingIdentifier;
@property (nonatomic) long long materialRecipe;
@property (nonatomic) bool preventsUserDismissal;
@property (nonatomic, copy) NSArray *supplementaryActions;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) UIColor *tintColor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAuxiliaryOptionActions:(id)arg1;
- (void)setAuxiliaryOptionsSummaryText:(id)arg1;
- (void)setContainsUnmanagedContent:(bool)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setGroupingIdentifier:(id)arg1;
- (void)setMaterialRecipe:(long long)arg1;
- (void)setPreventsUserDismissal:(bool)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTintColor:(id)arg1;

@end
