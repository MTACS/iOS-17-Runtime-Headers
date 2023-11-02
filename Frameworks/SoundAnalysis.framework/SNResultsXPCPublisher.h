
@interface SNResultsXPCPublisher : NSObject <SNResultsObserving> {
    void subscriber;
}

- (void).cxx_destruct;
- (id)init;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (void)requestDidComplete:(id)arg1;

@end
