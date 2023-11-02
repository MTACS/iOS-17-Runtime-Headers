
@interface HDSQLiteOrderingTerm : NSObject <NSCopying> {
    bool  _ascending;
    NSString * _expression;
}

@property (nonatomic, readonly) bool ascending;
@property (nonatomic, readonly, copy) NSString *expression;

+ (id)orderingTermWithProperty:(id)arg1 entityClass:(Class)arg2 ascending:(bool)arg3;

- (void).cxx_destruct;
- (id)SQL;
- (bool)ascending;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)expression;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExpression:(id)arg1 ascending:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end
