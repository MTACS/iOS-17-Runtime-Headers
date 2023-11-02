
@interface _CNBufferingObservable : CNObservable {
    <CNObservable> * _observable;
    NSMutableArray * _results;
    <_CNBufferingStrategy> * _strategy;
}

@property (nonatomic, retain) <CNObservable> *observable;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) <_CNBufferingStrategy> *strategy;

- (void).cxx_destruct;
- (id)initWithBufferingStrategy:(id)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 observable:(id)arg2;
- (id)initWithLength:(unsigned long long)arg1 timeInterval:(double)arg2 scheduler:(id)arg3 observable:(id)arg4;
- (id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 observable:(id)arg3;
- (id)observable;
- (id)results;
- (void)sendBufferedResultsToObserver:(id)arg1;
- (void)setObservable:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setStrategy:(id)arg1;
- (id)strategy;
- (id)subscribe:(id)arg1;

@end
