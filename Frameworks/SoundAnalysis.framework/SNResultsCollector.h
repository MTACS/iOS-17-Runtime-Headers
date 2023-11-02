
@interface SNResultsCollector : NSObject <SNResultsObserving> {
    long long  _completeCount;
    NSMutableArray * _errors;
    NSMutableArray * _results;
}

@property (nonatomic, readonly) long long completeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *errors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (void).cxx_destruct;
- (void)clearCompleteCount;
- (void)clearErrors;
- (void)clearResults;
- (long long)completeCount;
- (id)errors;
- (id)init;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;
- (id)results;

@end
