
@interface FBSSettings : NSObject <BSDescriptionProviding, BSXPCCoding, BSXPCSecureCoding, FBSSettings, FBSSettingsSubclass, NSCopying, NSMutableCopying> {
    BSSettings * _legacyLocalSettings;
    BSSettings * _legacyOtherSettings;
    BSKeyedSettings * _localSettings;
    Class  _mutabilityLock;
    bool  _mutable;
    bool  _needsCoW;
    FBSSettings * _progenitor;
    BSKeyedSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) BSSettings *otherSettings;
@property (readonly) Class superclass;

+ (Class)_baseClass;
+ (Class)_counterpartClass;
+ (id)_descriptionProvider;
+ (Class)_diffClass;
+ (id)_legacyDescriptionProvider;
+ (Class)_mutableClass;
+ (void)_setCounterpartClass:(Class)arg1;
+ (id)_settingsExtensionsForSceneExtension:(Class)arg1;
+ (void)initialize;
+ (Class)subclassExtension;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)_addSceneExtension:(Class)arg1;
- (void)_addSceneExtension:(Class)arg1 applyingSettings:(id)arg2;
- (id)_allSceneExtensions;
- (void)_appendToDescriptionBuilder:(id)arg1;
- (id)_copyClearingProgenitor:(id /* block */)arg1;
- (bool)_hasAdditionalDescription;
- (bool)_isEmpty;
- (bool)_isEmptyForCoding:(bool)arg1;
- (bool)_isEqualToSettings:(id)arg1;
- (void)_lockMutabilityToExtension:(Class)arg1 inBlock:(id /* block */)arg2;
- (id)_progenitor;
- (void)_removeAllSceneExtensions;
- (void)_removeSceneExtension:(Class)arg1;
- (void)_removeSettingsExtension:(Class)arg1;
- (void)_removeVolatileSettings;
- (id)_sceneExtensionNames;
- (id)_unitTestRealValueForProperty:(SEL)arg1;
- (bool)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (bool)conformsToExtension:(Class)arg1;
- (id)copy:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopy:(id /* block */)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherSettings;
- (void)setValue:(id)arg1 forProperty:(SEL)arg2;
- (bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
- (id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)valueForProperty:(SEL)arg1 expectedClass:(Class)arg2;

@end
