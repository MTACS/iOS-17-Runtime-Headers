
@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying> {
    NSString * _property;
}

@property (nonatomic, readonly) NSString *property;

- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)property;

@end
