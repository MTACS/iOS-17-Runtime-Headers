
@interface NSSQLToOne : NSSQLRelationship {
    NSSQLForeignEntityKey * _foreignEntityKey;
    NSSQLForeignKey * _foreignKey;
    NSSQLForeignOrderKey * _foreignOrderKey;
    bool  _isVirtual;
}

- (void)_setForeignOrderKey:(id)arg1;
- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)foreignKey;
- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)slot;

@end
