
@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate * _scope;
}

@property (nonatomic, readonly) NSSQLEntity *disambiguatingEntity;
@property (nonatomic, readonly) NSArray *disambiguationKeypath;
@property (nonatomic, readonly) bool disambiguationKeypathHasToMany;

+ (bool)expressionIsBasicKeypath:(id)arg1;
+ (bool)isSimpleKeypath:(id)arg1;

- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(bool)arg2 inContext:(id)arg3;
- (id)_lastScopedItem;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (bool)disambiguationKeypathHasToMany;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (id)governingEntity;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)initWithScope:(id)arg1;
- (bool)isFunctionScoped;
- (bool)isHavingScoped;
- (bool)isIndexExpressionScoped;
- (bool)isIndexScoped;
- (bool)isOrScoped;
- (bool)isTargetColumnsScoped;
- (bool)isUpdateColumnsScoped;
- (bool)isUpdateScoped;
- (bool)isWhereScoped;
- (bool)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(bool)arg3;

@end
