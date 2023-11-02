
@interface NSSQLEntity : NSStoreMapping {
    NSMutableArray * _attrColumns;
    NSMutableArray * _columnsToFetch;
    NSMutableArray * _columnsToFetchNoSubentities;
    NSMutableDictionary * _compositeAttributeNameToSQLProperties;
    NSSQLEntity_DerivedAttributesExtension * _derivedAttributeExtension;
    NSMutableArray * _derivedAttributes;
    NSMutableArray * _ekColumns;
    NSEntityDescription * _entityDescription;
    unsigned int  _entityID;
    NSSQLEntityKey * _entityKey;
    void * _fetch_entity_plan;
    NSMutableArray * _fkColumns;
    NSMutableArray * _fokColumns;
    NSSQLStoreMappingGenerator * _mappingGenerator;
    NSSQLModel * _model;
    NSMutableArray * _multicolumnUniquenessConstraints;
    void * _odiousHashHackStorage;
    NSSQLOptLockKey * _optLockKey;
    NSSQLPrimaryKey * _primaryKey;
    NSMutableDictionary * _properties;
    NSArray * _propertiesAllToManysCache;
    NSArray * _propertyAllCache;
    NSArray * _propertyManyToManyCache;
    NSKnownKeysMappingStrategy * _propertyMapping;
    NSSQLEntity * _rootEntity;
    NSMutableDictionary * _rtreeIndices;
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _hasAttributesWithFileBackedFutures : 1; 
        unsigned int _reserved : 30; 
    }  _sqlentityFlags;
    NSMutableArray * _subentities;
    unsigned int  _subentityMaxID;
    NSSQLEntity * _superentity;
    NSString * _tableName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _toOneRange;
    NSMutableArray * _uniqueProperties;
    NSMutableArray * _virtualFKs;
}

+ (void)initialize;

- (id)attributeColumns;
- (id)attributes;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entityDescription;
- (id)externalName;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (id)foreignOrderKeyColumns;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (id)manyToManyRelationships;
- (id)model;
- (id)name;
- (id)rootEntity;
- (id)tableName;
- (id)toManyRelationships;

@end
