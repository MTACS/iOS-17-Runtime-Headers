
@interface NSAttributeDescription : NSPropertyDescription {
    Class  _attributeValueClass;
    NSString * _attributeValueClassName;
    id  _defaultValue;
    unsigned short  _type;
    NSString * _valueTransformerName;
}

@property bool allowsCloudEncryption;
@property bool allowsExternalBinaryDataStorage;
@property unsigned long long attributeType;
@property (copy) NSString *attributeValueClassName;
@property (retain) id defaultValue;
@property bool isFileBackedFuture;
@property bool preserveValueOnDeletionInPersistentHistory;
@property bool preservesValueInHistoryOnDeletion;
@property (nonatomic, readonly) bool usesMergeableStorage;
@property (copy) NSString *valueTransformerName;
@property (readonly, copy) NSData *versionHash;

+ (void)initialize;
+ (id)stringForAttributeType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (bool)_attributeTypeIsSchemaEqual:(unsigned long long)arg1;
- (Class)_attributeValueClass;
- (bool)_comparePredicatesAndWarnings:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (int)_encodedAttributeFlagsForFlags:(int)arg1;
- (bool)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3;
- (id)_initWithType:(unsigned long long)arg1;
- (bool)_isAttribute;
- (bool)_isEqual:(id)arg1 skipIndexCheck:(bool)arg2;
- (bool)_isEqualWithoutIndex:(id)arg1;
- (bool)_isSchemaEqual:(id)arg1;
- (bool)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4;
- (unsigned long long)_propertyType;
- (id)_rawValidationPredicates;
- (id)_rawValidationWarnings;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (bool)allowsCloudEncryption;
- (bool)allowsExternalBinaryDataStorage;
- (unsigned long long)attributeType;
- (id)attributeValueClassName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFileBackedFuture;
- (bool)isIndexed;
- (bool)preserveValueOnDeletionInPersistentHistory;
- (bool)preservesValueInHistoryOnDeletion;
- (void)setAllowsCloudEncryption:(bool)arg1;
- (void)setAllowsExternalBinaryDataStorage:(bool)arg1;
- (void)setAttributeType:(unsigned long long)arg1;
- (void)setAttributeValueClassName:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setIsFileBackedFuture:(bool)arg1;
- (void)setPreserveValueOnDeletionInPersistentHistory:(bool)arg1;
- (void)setPreservesValueInHistoryOnDeletion:(bool)arg1;
- (void)setValueTransformerName:(id)arg1;
- (bool)storesBinaryDataExternally;
- (bool)usesMergeableStorage;
- (id)validationPredicates;
- (id)validationWarnings;
- (id)valueTransformerName;
- (id)versionHash;

@end
