
@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject {
    NSArray * _batches;
}

@property (nonatomic, readonly) NSArray *batches;

- (void).cxx_destruct;
- (void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2;
- (id)batchedObservables;
- (id)batches;
- (id)initWithBatchCount:(unsigned long long)arg1;

@end
