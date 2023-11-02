
@interface MTRecipeMaterialSettings : NSObject <MTRecipeMaterialSettingsProviding> {
    <MTTinting><MTMaterialFiltering><MTUserInfoProviding> * _baseMaterialSettings;
    long long  _materialSettingsVersion;
    NSString * _recipeName;
    NSDictionary * _styles;
}

@property (nonatomic, readonly) <MTTinting><MTMaterialFiltering><MTUserInfoProviding> *baseMaterialSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long materialSettingsVersion;
@property (nonatomic, readonly, copy) NSString *recipeName;
@property (nonatomic, retain) NSDictionary *styles;
@property (readonly) Class superclass;

+ (id)styleSetNameForStyleSetFromRecipeWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_newVisualStyleSet;
- (id)_platformColorsStyleSetName;
- (id)_visualStyleSetDescription;
- (id)baseMaterialSettings;
- (id)description;
- (id)initWithRecipeName:(id)arg1 andDescription:(id)arg2 descendantDescriptions:(id)arg3 bundle:(id)arg4;
- (long long)materialSettingsVersion;
- (id)recipeName;
- (void)setStyles:(id)arg1;
- (id)styleNameForCategory:(id)arg1;
- (id)styles;

@end
