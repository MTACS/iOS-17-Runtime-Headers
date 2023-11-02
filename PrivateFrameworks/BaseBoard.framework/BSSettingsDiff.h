
@interface BSSettingsDiff : NSObject <BSDescriptionProviding, BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    BSSettings * _changes;
    <BSSettingDescriptionProvider> * _descriptionProvider;
    NSSet * _flagRemovals;
    NSSet * _objectRemovals;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BSSettingDescriptionProvider> *descriptionProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEmpty;
@property (readonly) Class superclass;

+ (Class)_removalClass;
+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_diffTypesForKey:(id)arg1;
- (unsigned long long)_diffTypesForSetting:(unsigned long long)arg1;
- (bool)_isKeyed;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (id)allSettings;
- (void)applyToSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionProvider;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)inspectChangesWithBlock:(id /* block */)arg1;
- (void)inspectKeyedChangesWithBlock:(id /* block */)arg1;
- (bool)isEmpty;
- (void)setDescriptionProvider:(id)arg1;
- (bool)settingChangedForKey:(id)arg1;
- (bool)settingChangedForKey:(id)arg1 type:(out unsigned long long*)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
