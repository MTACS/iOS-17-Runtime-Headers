
@interface NSDerivedAttributeDescription : NSAttributeDescription {
    NSExpression * _derivationExpression;
    NSPredicate * _filteringPredicate;
}

@property (retain) NSExpression *derivationExpression;

+ (bool)supportsSecureCoding;

- (void)_createCachesAndOptimizeState;
- (bool)_isSchemaEqual:(id)arg1;
- (unsigned long long)_propertyType;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)derivationExpression;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (bool)isTransient;
- (void)setDefaultValue:(id)arg1;
- (void)setDerivationExpression:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setRenamingIdentifier:(id)arg1;
- (void)setTransient:(bool)arg1;

@end
