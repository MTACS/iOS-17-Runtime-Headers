
@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {
    NSSQLGroupByIntermediate * _groupByClause;
    NSMutableArray * _groupByKeypaths;
    NSSQLHavingIntermediate * _havingClause;
    bool  _isDictionaryCountFetch;
    NSMutableArray * _joinIntermediates;
    NSMutableDictionary * _joinKeypaths;
    NSSQLOffsetIntermediate * _offsetClause;
    NSSQLSelectIntermediate * _selectClause;
}

- (void)dealloc;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithScope:(id)arg1;
- (bool)isFunctionScoped;
- (id)selectIntermediate;

@end
