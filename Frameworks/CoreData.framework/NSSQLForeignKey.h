
@interface NSSQLForeignKey : NSSQLColumn {
    NSString * _name;
    NSSQLToOne * _toOne;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)name;
- (id)toOneRelationship;

@end
