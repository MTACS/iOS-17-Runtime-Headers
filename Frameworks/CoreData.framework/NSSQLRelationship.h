
@interface NSSQLRelationship : NSSQLProperty {
    NSSQLEntity * _destinationEntity;
    NSSQLRelationship * _inverse;
    NSString * _name;
}

- (void)_setForeignOrderKey:(id)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)correlationTableName;
- (void)dealloc;
- (id)destinationEntity;
- (id)foreignKey;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)name;
- (id)sourceEntity;

@end
