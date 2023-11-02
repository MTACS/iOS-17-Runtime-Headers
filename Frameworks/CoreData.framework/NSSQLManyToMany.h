
@interface NSSQLManyToMany : NSSQLRelationship {
    NSString * _columnName;
    NSString * _correlationTableName;
    NSString * _orderColumnName;
}

- (id)columnName;
- (id)correlationTableName;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

@end
