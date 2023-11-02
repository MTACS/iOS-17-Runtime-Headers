
@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {
    NSMutableArray * _concurrentFetchingPipelineRows;
    NSString * _externalDataLinksDirectory;
    NSString * _externalDataReferencesDirectory;
    NSFaultHandler * _faultHandler;
    _PFFetchPlanHeader * _fetchPlan;
    NSString * _fileBackedFuturesDirectory;
    int  _fileProtectionLevel;
    bool  _isFaultRequest;
    bool  _isUsingCachedStatement;
    NSMutableSet * _objectIDsToRegister;
    NSMutableSet * _objectsToAwaken;
    NSFetchRequest * _originalRequest;
    NSSQLFetchRequestContext * _parentContext;
    NSDictionary * _prefetchingSubstitutionVariables;
    NSMutableArray * _resultFaultsThatWereFired;
    bool  _shouldUseBatches;
    NSSQLEntity * _sqlEntity;
    NSSQLModel * _sqlModel;
    NSSQLiteStatement * _statement;
    bool  _storeIsUbiquitized;
}

@property (nonatomic, retain) NSSQLiteStatement *fetchStatement;
@property (nonatomic) bool isFaultRequest;
@property (nonatomic, readonly) NSFetchRequest *request;
@property (nonatomic, readonly) bool shouldUseBatches;

- (id)_createStatement;
- (id)createChildContextForNestedFetchRequest:(id)arg1;
- (void)dealloc;
- (void)executeEpilogue;
- (void)executePrologue;
- (bool)executeRequestCore:(id*)arg1;
- (id)fetchStatement;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (bool)isFaultRequest;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)request;
- (void)setFetchStatement:(id)arg1;
- (void)setIsFaultRequest:(bool)arg1;
- (bool)shouldUseBatches;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;

@end
