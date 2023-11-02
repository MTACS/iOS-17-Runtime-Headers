
@interface CNAutocompletePredictionSearch : NSObject <CNAutocompleteSearch> {
    CNContactStore * _contactStore;
    <CNScheduler> * _scheduler;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned long long)predictedResultLimit;
+ (unsigned long long)predictionStrategyForRequest:(id)arg1;

- (void).cxx_destruct;
- (id)contactStore;
- (id)executeRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)strategyForRequest:(id)arg1;
- (id)suggestionsForRequest:(id)arg1;

@end
