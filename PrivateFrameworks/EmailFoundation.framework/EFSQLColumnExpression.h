
@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLValueExpressable> {
    NSString * _name;
    NSString * _tableName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) EFSQLDisqualifiedColumnExpression *disqualified;
@property (nonatomic, readonly, copy) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;

+ (id)allColumns;
+ (id)column:(id)arg1;
+ (id)table:(id)arg1 column:(id)arg2;

- (void).cxx_destruct;
- (id)beginsWith:(id)arg1 caseSensitive:(bool)arg2;
- (id)between:(id)arg1;
- (id)cachedSelf;
- (id)concatenate:(id)arg1;
- (id)contains:(id)arg1 caseSensitive:(bool)arg2;
- (id)disqualified;
- (id)doesNotContain:(id)arg1 caseSensitive:(bool)arg2;
- (id)doesNotMatchMask:(id)arg1;
- (id)ef_SQLExpression;
- (id)ef_SQLIsolatedExpression;
- (void)ef_renderSQLExpressionInto:(id)arg1;
- (id)endsWith:(id)arg1 caseSensitive:(bool)arg2;
- (id)equalTo:(id)arg1;
- (id)expressionForPredicateOperatorType:(unsigned long long)arg1 constantValue:(id)arg2;
- (id)glob:(id)arg1;
- (id)greaterThan:(id)arg1;
- (id)greaterThanEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)in:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 table:(id)arg2;
- (id)is:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isNot:(id)arg1;
- (id)isNotNull;
- (id)isNull;
- (id)lessThan:(id)arg1;
- (id)lessThanEqualTo:(id)arg1;
- (id)like:(id)arg1;
- (id)like:(id)arg1 patternType:(unsigned long long)arg2;
- (id)matchesMask:(id)arg1;
- (id)minus:(id)arg1;
- (id)name;
- (id)notBetween:(id)arg1;
- (id)notEqualTo:(id)arg1;
- (id)notGlob:(id)arg1;
- (id)notIn:(id)arg1;
- (id)notLike:(id)arg1;
- (id)notLike:(id)arg1 patternType:(unsigned long long)arg2;
- (id)plus:(id)arg1;
- (id)tableName;

@end
