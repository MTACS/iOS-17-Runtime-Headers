
@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying> {
    bool  _matchesNull;
}

@property (nonatomic, readonly) bool matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)arg1;
+ (id)isNullPredicateWithProperty:(id)arg1;

- (id)SQLForEntityClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesNull;

@end
