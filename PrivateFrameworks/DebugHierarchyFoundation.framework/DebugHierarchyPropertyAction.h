
@interface DebugHierarchyPropertyAction : DebugHierarchyAbstractRequestAction <DebugHierarchyRequestObjectAction> {
    NSArray * _exactTypes;
    bool  _exactTypesAreExclusive;
    NSArray * _objectIdentifiers;
    bool  _objectIdentifiersAreExclusive;
    long long  _options;
    long long  _optionsComparisonStyle;
    NSArray * _propertyNames;
    bool  _propertyNamesAreExclusive;
    NSArray * _types;
    bool  _typesAreExclusive;
    long long  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *exactTypes;
@property bool exactTypesAreExclusive;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *objectIdentifiers;
@property bool objectIdentifiersAreExclusive;
@property long long options;
@property long long optionsComparisonStyle;
@property (retain) NSArray *propertyNames;
@property bool propertyNamesAreExclusive;
@property (readonly) Class superclass;
@property (retain) NSArray *types;
@property bool typesAreExclusive;
@property long long visibility;

- (void).cxx_destruct;
- (void)_fetchValuesForPropertiesWithNames:(id)arg1 onObject:(id)arg2 inContext:(id)arg3;
- (bool)_isTargetingProperty:(id)arg1;
- (void)addPropertyNames:(id)arg1;
- (id)debugDescription;
- (id)exactTypes;
- (bool)exactTypesAreExclusive;
- (id)init;
- (bool)isTargetingObject:(id)arg1;
- (id)keysToArchiveViaKVC;
- (id)objectIdentifiers;
- (bool)objectIdentifiersAreExclusive;
- (long long)options;
- (long long)optionsComparisonStyle;
- (void)performInContext:(id)arg1 withObject:(id)arg2;
- (id)propertyNames;
- (bool)propertyNamesAreExclusive;
- (void)setExactTypes:(id)arg1;
- (void)setExactTypes:(id)arg1 exlusive:(bool)arg2;
- (void)setExactTypesAreExclusive:(bool)arg1;
- (void)setObjectIdentifiers:(id)arg1;
- (void)setObjectIdentifiers:(id)arg1 exlusive:(bool)arg2;
- (void)setObjectIdentifiersAreExclusive:(bool)arg1;
- (void)setOptions:(long long)arg1;
- (void)setOptions:(long long)arg1 comparisonStyle:(long long)arg2;
- (void)setOptionsComparisonStyle:(long long)arg1;
- (void)setPropertyNames:(id)arg1;
- (void)setPropertyNames:(id)arg1 exlusive:(bool)arg2;
- (void)setPropertyNamesAreExclusive:(bool)arg1;
- (void)setTypes:(id)arg1;
- (void)setTypes:(id)arg1 exlusive:(bool)arg2;
- (void)setTypesAreExclusive:(bool)arg1;
- (void)setVisibility:(long long)arg1;
- (bool)targetsObjectIdentifiers:(id*)arg1;
- (id)types;
- (bool)typesAreExclusive;
- (long long)visibility;

@end
