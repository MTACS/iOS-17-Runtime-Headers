
@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding> {
    NSMutableDictionary * _styleNamesToVisualStylings;
    NSString * _visualStyleSetName;
    long long  _visualStyleSetVersion;
    NSMutableDictionary * _visualStylesToStyleNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *visualStyleSetName;
@property (nonatomic, readonly) long long visualStyleSetVersion;

+ (id)recipeNameForRecipeFromStyle:(id)arg1 fromStyleSetWithName:(id)arg2;

- (void).cxx_destruct;
- (id)_materialDescriptionForStyle:(id)arg1 withProvidedStyles:(id)arg2;
- (id)_newMaterialSettingsForStyle:(id)arg1 withProvidedStyles:(id)arg2;
- (id)description;
- (id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3;
- (id)visualStyleSetName;
- (long long)visualStyleSetVersion;
- (id)visualStylingForStyle:(id)arg1;

@end
