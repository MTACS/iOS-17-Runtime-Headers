
@interface KGGraphChange : NSObject {
    KGElementIdentifierSet * _edgesDeleted;
    KGElementIdentifierSet * _edgesInserted;
    KGElementIdentifierSet * _edgesUpdated;
    KGElementIdentifierSet * _nodesDeleted;
    KGElementIdentifierSet * _nodesInserted;
    KGElementIdentifierSet * _nodesUpdated;
    KGTransactionToken * _transactionToken;
}

@property (nonatomic, readonly) KGElementIdentifierSet *edgesDeleted;
@property (nonatomic, readonly) KGElementIdentifierSet *edgesInserted;
@property (nonatomic, readonly) KGElementIdentifierSet *edgesUpdated;
@property (nonatomic, readonly) KGElementIdentifierSet *nodesDeleted;
@property (nonatomic, readonly) KGElementIdentifierSet *nodesInserted;
@property (nonatomic, readonly) KGElementIdentifierSet *nodesUpdated;
@property (nonatomic, readonly) KGTransactionToken *transactionToken;

- (void).cxx_destruct;
- (id)edgesDeleted;
- (id)edgesInserted;
- (id)edgesUpdated;
- (id)initWithTransactionToken:(id)arg1 edgesInserted:(id)arg2 edgesUpdated:(id)arg3 edgesDeleted:(id)arg4;
- (id)initWithTransactionToken:(id)arg1 nodesInserted:(id)arg2 edgesInserted:(id)arg3 nodesUpdated:(id)arg4 edgesUpdated:(id)arg5 nodesDeleted:(id)arg6 edgesDeleted:(id)arg7;
- (id)initWithTransactionToken:(id)arg1 nodesInserted:(id)arg2 nodesUpdated:(id)arg3 nodesDeleted:(id)arg4;
- (id)nodesDeleted;
- (id)nodesInserted;
- (id)nodesUpdated;
- (id)transactionToken;

@end
