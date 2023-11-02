
@protocol SNResultsObserving <NSObject>

@required

- (void)request:(id <SNRequest>)arg1 didProduceResult:(id <SNResult>)arg2;

@optional

- (void)request:(id <SNRequest>)arg1 didFailWithError:(NSError *)arg2;
- (void)requestDidComplete:(id <SNRequest>)arg1;

@end
