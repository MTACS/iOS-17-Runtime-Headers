
@interface SNResultsForwarder : NSObject <SNResultsObserving> {
    void completionHandler;
    void resultsHandler;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithCompletionHandler:(id /* block */)arg1 resultsHandler:(id /* block */)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;

@end
