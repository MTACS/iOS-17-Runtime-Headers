
@interface EDMessageQueryParser : NSObject {
    <EFSQLValueExpressable> * _additionalSQLClause;
    <EFSQLValueExpressable> * _additionalSQLClauseForCountQuery;
    <EFSQLValueExpressable> * _additionalSQLClauseForGlobalMessageQuery;
    <EFSQLValueExpressable> * _additionalSQLClauseForJournaledMessages;
    EFSQLObjectPropertyMapper * _sqlPropertyMapper;
    EDMessageQueryTransformer * _transformer;
}

@property (nonatomic, readonly) <EFSQLValueExpressable> *additionalSQLClause;
@property (nonatomic, readonly) <EFSQLValueExpressable> *additionalSQLClauseForCountQuery;
@property (nonatomic, readonly) <EFSQLValueExpressable> *additionalSQLClauseForGlobalMessageQuery;
@property (nonatomic, readonly) <EFSQLValueExpressable> *additionalSQLClauseForJournaledMessages;
@property (nonatomic, readonly) EFSQLObjectPropertyMapper *sqlPropertyMapper;
@property (nonatomic, readonly) EDMessageQueryTransformer *transformer;

+ (id)log;

- (void).cxx_destruct;
- (void)_modifySelectStatement:(id)arg1 byAddingAdditionalClause:(id)arg2;
- (id)_sqlQueryToCountResultsForQuery:(id)arg1 distinctByGlobalMessageID:(bool)arg2;
- (id)additionalSQLClause;
- (id)additionalSQLClauseForCountQuery;
- (id)additionalSQLClauseForGlobalMessageQuery;
- (id)additionalSQLClauseForJournaledMessages;
- (id)initWithSchema:(id)arg1 protectedSchema:(id)arg2 accountsProvider:(id)arg3 vipManager:(id)arg4 messagePersistence:(id)arg5 mailboxPersistence:(id)arg6;
- (id)sqlCountQueryForQuery:(id)arg1;
- (id)sqlPropertyMapper;
- (id)sqlQueryForQuery:(id)arg1 protectedDataAvailable:(bool)arg2;
- (id)sqlQueryToCountJournaledMessagesForQuery:(id)arg1;
- (id)sqlQueryToCountMessagesWithGlobalMessageID:(long long)arg1 matchingQuery:(id)arg2;
- (id)transformer;

@end
