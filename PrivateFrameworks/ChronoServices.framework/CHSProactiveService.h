
@interface CHSProactiveService : NSObject {
    CHSChronoServicesConnection * _connection;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)loadSuggestedWidget:(id)arg1 metrics:(id)arg2 stackIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)loadSuggestedWidget:(id)arg1 withMetrics:(id)arg2 completion:(id /* block */)arg3;
- (void)suggestionBudgetsForStackIdentifiers:(id)arg1 completion:(id /* block */)arg2;

@end
