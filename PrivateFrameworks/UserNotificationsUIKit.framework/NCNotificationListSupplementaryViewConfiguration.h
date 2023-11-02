
@interface NCNotificationListSupplementaryViewConfiguration : NSObject <BSDescriptionProviding> {
    NSArray * _auxiliaryOptionActions;
    NSString * _auxiliaryOptionsSummaryText;
    bool  _containsUnmanagedContent;
    UIAction * _defaultAction;
    NSString * _groupName;
    NSString * _groupingIdentifier;
    long long  _materialRecipe;
    bool  _preventsUserDismissal;
    NSArray * _supplementaryActions;
    UIColor * _textColor;
    UIColor * _tintColor;
}

@property (nonatomic, readonly, copy) NSArray *auxiliaryOptionActions;
@property (nonatomic, readonly, copy) NSString *auxiliaryOptionsSummaryText;
@property (nonatomic, readonly) bool containsUnmanagedContent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) UIAction *defaultAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic, readonly, copy) NSString *groupingIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long materialRecipe;
@property (nonatomic, readonly) bool preventsUserDismissal;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supplementaryActions;
@property (nonatomic, readonly, copy) UIColor *textColor;
@property (nonatomic, readonly, copy) UIColor *tintColor;

- (void).cxx_destruct;
- (id)_initWithGroupingIdentifier:(id)arg1 groupName:(id)arg2 defaultAction:(id)arg3 supplementaryActions:(id)arg4 auxiliaryOptionsSummaryText:(id)arg5 auxiliaryOptionActions:(id)arg6 tintColor:(id)arg7 textColor:(id)arg8 materialRecipe:(long long)arg9 containsUnmanagedContent:(bool)arg10 preventsUserDismissal:(bool)arg11;
- (id)auxiliaryOptionActions;
- (id)auxiliaryOptionsSummaryText;
- (bool)containsUnmanagedContent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)defaultAction;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)groupName;
- (id)groupingIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)materialRecipe;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)preventsUserDismissal;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)supplementaryActions;
- (id)textColor;
- (id)tintColor;

@end
