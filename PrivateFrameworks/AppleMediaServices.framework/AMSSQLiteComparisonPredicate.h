
@interface AMSSQLiteComparisonPredicate : AMSSQLitePropertyPredicate <NSCopying> {
    long long  _comparisonType;
    id  _value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly) id value;

+ (id)predicateWithProperty:(id)arg1 equalToLongLong:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (id)_comparisonTypeString;
- (void)applyBinding:(id)arg1 atIndex:(inout int*)arg2;
- (long long)comparisonType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)value;

@end
