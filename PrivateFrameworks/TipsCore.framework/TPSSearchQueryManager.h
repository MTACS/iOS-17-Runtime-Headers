
@interface TPSSearchQueryManager : NSObject {
    void pendingQueries;
    void syncQueue;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)cancelQueryWithIdentifier:(id)arg1;
- (id)init;
- (void)performQuery:(id)arg1 completion:(id /* block */)arg2;

@end
