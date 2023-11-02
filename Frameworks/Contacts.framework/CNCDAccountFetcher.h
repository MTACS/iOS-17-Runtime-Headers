
@interface CNCDAccountFetcher : NSObject {
    CNCDPersistenceContext * _persistenceContext;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) CNCDPersistenceContext *persistenceContext;
@property (nonatomic, readonly) NSPredicate *predicate;

+ (id)accountsForPredicate:(id)arg1 inPersistenceStack:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)fetchAccounts:(id*)arg1;
- (id)init;
- (id)initWithPredicate:(id)arg1 persistenceContext:(id)arg2;
- (id)persistenceContext;
- (id)predicate;

@end
