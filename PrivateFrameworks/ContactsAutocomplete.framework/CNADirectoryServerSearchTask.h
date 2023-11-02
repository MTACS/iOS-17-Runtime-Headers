
@interface CNADirectoryServerSearchTask : CNTask {
    CNCancelationToken * _cancelationToken;
    CNContactStore * _contactStore;
    NSArray * _containers;
    NSArray * _daResults;
    CNAutocompleteFetchRequest * _request;
    NSArray * _results;
    CNResult * _returnValue;
}

@property (nonatomic, readonly) CNCancelationToken *cancelationToken;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *request;

- (void).cxx_destruct;
- (id)cancelationToken;
- (id)contactStore;
- (void)convertResults;
- (void)createReturnValue;
- (void)fetchServerSearchContainers;
- (id)initWithRequest:(id)arg1 contactStore:(id)arg2 cancelationToken:(id)arg3;
- (id)makeQueryForContainer:(id)arg1 withLatch:(id)arg2 andCollectConsumers:(id)arg3;
- (id)request;
- (id)run;
- (void)searchServerContainers;
- (void)validateRequest;

@end
