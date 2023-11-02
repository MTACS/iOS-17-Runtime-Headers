
@interface NSSQLPrimaryKey : NSSQLColumn {
    NSString * _name;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)name;

@end
