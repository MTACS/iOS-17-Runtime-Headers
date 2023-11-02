
@interface TLOperation : NSOperation {
    <TLTimelineDataSource> * _dataSource;
    NSError * _error;
    id /* block */  _operationCompletionBlock;
}

@property (copy) id /* block */ completionBlock;
@property (retain) <TLTimelineDataSource> *dataSource;
@property (readonly) NSError *error;
@property (copy) id /* block */ operationCompletionBlock;

+ (unsigned long long)relativePriority;

- (void).cxx_destruct;
- (id)dataSource;
- (id)error;
- (id)init;
- (id /* block */)operationCompletionBlock;
- (void)setDataSource:(id)arg1;
- (void)setOperationCompletionBlock:(id /* block */)arg1;

@end
