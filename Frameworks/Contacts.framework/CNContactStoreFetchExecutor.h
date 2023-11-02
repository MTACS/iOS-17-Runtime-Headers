
@interface CNContactStoreFetchExecutor : NSObject <CNFetchRequestVisitor> {
    CNResult * _result;
    CNContactStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CNResult *result;
@property (readonly) CNContactStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)countForFetchRequest:(id)arg1;
- (id)executeFetchRequest:(id)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)store;
- (void)visitChangeHistoryFetchRequest:(id)arg1;
- (void)visitContactFetchRequest:(id)arg1;

@end
