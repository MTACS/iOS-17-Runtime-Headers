
@interface DebugHierarchyRuntimeType : NSObject {
    NSArray * _additionalGroupingIDs;
    NSString * _childGroupingID;
    NSMutableDictionary * _instanceProperties;
    NSString * _moduleName;
    NSString * _name;
    NSString * _nameIncludingModules;
    DebugHierarchyRuntimeType * _parentType;
    NSSet * _subtypes;
}

@property (retain) NSArray *additionalGroupingIDs;
@property (retain) NSString *childGroupingID;
@property (readonly) NSMutableDictionary *instanceProperties;
@property (retain) NSString *moduleName;
@property (retain) NSString *name;
@property (retain) NSString *nameIncludingModules;
@property DebugHierarchyRuntimeType *parentType;
@property (readonly) long long sourceLanguage;
@property (retain) NSSet *subtypes;

+ (id)typeWithDictionaryRepresentation:(id)arg1;
+ (id)typeWithName:(id)arg1;

- (void).cxx_destruct;
- (void)addInstanceProperty:(id)arg1;
- (void)addSubtype:(id)arg1;
- (id)additionalGroupingIDs;
- (id)childGroupingID;
- (id)closestTypeVendingAChildGroupingID;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)instanceProperties;
- (bool)isEqual:(id)arg1;
- (bool)isKindOfTypeWithName:(id)arg1;
- (id)moduleName;
- (id)name;
- (id)nameIncludingModules;
- (id)namesOfInheritanceChain;
- (id)parentType;
- (id)propertyWithName:(id)arg1;
- (void)setAdditionalGroupingIDs:(id)arg1;
- (void)setChildGroupingID:(id)arg1;
- (void)setModuleName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameIncludingModules:(id)arg1;
- (void)setParentType:(id)arg1;
- (void)setSubtypes:(id)arg1;
- (long long)sourceLanguage;
- (id)subtypes;

@end
