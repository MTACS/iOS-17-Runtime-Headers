
@interface BSSettings : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    <BSSettingDescriptionProvider> * _descriptionProvider;
    BSMutableIntegerMap * _settingToFlagMap;
    BSMutableIntegerMap * _settingToObjectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BSSettingDescriptionProvider> *descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (void)_appendObject:(id)arg1 toBuilder:(id)arg2 forName:(id)arg3;
+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyToSettings:(id)arg1;
- (bool)_isMutable;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (id)_sortedSettingsForDescription;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (bool)boolForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionProvider;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateFlagsWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isKeyedSettings;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)setDescriptionProvider:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (id)SBUISA_BSActionforSetting:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })SBUISA_CGRectforSetting:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })SBUISA_CGSizeforSetting:(unsigned long long)arg1;
- (id)SBUISA_UIColorForSetting:(unsigned long long)arg1;
- (id)SBUISA_URLforSetting:(unsigned long long)arg1;
- (id)SBUISA_backgroundActivityIdentifiersForSetting:(unsigned long long)arg1;
- (long long)SBUISA_contentRoleforSetting:(unsigned long long)arg1;
- (unsigned int)SBUISA_contextIdforSetting:(unsigned long long)arg1;
- (long long)SBUISA_customLayoutModeforSetting:(unsigned long long)arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })SBUISA_directionalEdgeInsetsforSetting:(unsigned long long)arg1;
- (long long)SBUISA_layoutModeforSetting:(unsigned long long)arg1;
- (unsigned long long)SBUISA_presentationBehaviorsForSetting:(unsigned long long)arg1;
- (unsigned long long)SBUISA_renderingIdforSetting:(unsigned long long)arg1;
- (id)SBUISA_stringforSetting:(unsigned long long)arg1;
- (id)SBUI_systemApertureDescription;
- (id)SBUI_systemApertureDescriptionOfDiffFromSettings:(id)arg1;

@end
