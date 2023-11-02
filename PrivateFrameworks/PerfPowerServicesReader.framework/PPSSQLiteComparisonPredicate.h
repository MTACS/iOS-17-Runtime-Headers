
@interface PPSSQLiteComparisonPredicate : PPSSQLitePropertyPredicate <NSCopying> {
    long long  _comparisonType;
    id  _value;
}

@property (nonatomic, readonly) long long comparisonType;
@property (nonatomic, readonly) id value;

+ (id)predicateWithProperty:(id)arg1 beginsWithString:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 containsString:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 endsWithString:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 greaterThanOrEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 greaterThanValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 lessThanOrEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 lessThanValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 likePattern:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 likeValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 likeValue:(id)arg2 escapeCharacter:(id)arg3;
+ (id)predicateWithProperty:(id)arg1 notEqualToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;

- (void).cxx_destruct;
- (id)_comparisonTypeString;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (long long)comparisonType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)sqlForEntity:(id)arg1;
- (id)value;

@end
