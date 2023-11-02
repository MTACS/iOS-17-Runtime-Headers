
@interface PPSSQLiteNullPredicate : PPSSQLitePropertyPredicate <NSCopying> {
    bool  _matchesNull;
}

@property (nonatomic, readonly) bool matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)arg1;
+ (id)isNullPredicateWithProperty:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEqual:(id)arg1;
- (bool)matchesNull;
- (id)sqlForEntity:(id)arg1;

@end
