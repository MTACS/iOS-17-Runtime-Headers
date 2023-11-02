
@interface CRKASMConcreteUserDirectoryIterator : NSObject <CRKASMUserDirectoryIterator> {
    bool  _executing;
    <CRKClassKitQuery> * _query;
    NSMutableArray * _queryCompletionQueue;
    <CRKClassKitRosterRequirements> * _requirements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExecuting, nonatomic) bool executing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CRKClassKitQuery> *query;
@property (nonatomic, readonly) NSMutableArray *queryCompletionQueue;
@property (nonatomic, readonly) <CRKClassKitRosterRequirements> *requirements;
@property (readonly) Class superclass;

+ (id)iteratorWithRosterRequirements:(id)arg1 queryGenerator:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)fetchNextUsersWithCompletion:(id /* block */)arg1;
- (id)initWithRequirements:(id)arg1 query:(id)arg2;
- (bool)isExecuting;
- (id)query;
- (id)queryCompletionQueue;
- (void)queryDidFinishExecutingWithResults:(id)arg1 error:(id)arg2;
- (id)requirements;
- (void)serviceQueryQueue;
- (void)setExecuting:(bool)arg1;

@end
