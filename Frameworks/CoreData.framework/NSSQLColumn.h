
@interface NSSQLColumn : NSSQLProperty {
    NSString * _columnName;
}

- (id)columnName;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initForReadOnlyFetching;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned char)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (unsigned int)slot;
- (unsigned char)sqlType;

@end
