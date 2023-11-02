
@interface SPQueryJob : NSObject {
    NSString * _dataclass;
    id /* block */  _resultsHandler;
    SPQueryResultsQueue * _resultsQueue;
    struct __SIJobRef { } * _siJob;
}

@property (nonatomic, retain) NSString *dataclass;
@property (nonatomic, copy) id /* block */ resultsHandler;
@property (nonatomic) SPQueryResultsQueue *resultsQueue;
@property (nonatomic) struct __SIJobRef { }*siJob;

- (void).cxx_destruct;
- (void)cancel;
- (id)dataclass;
- (void)dealloc;
- (id)initWithSIJob:(struct __SIJobRef { }*)arg1 dataclass:(id)arg2 eventHandler:(id /* block */)arg3 resultsHandler:(id /* block */)arg4;
- (id /* block */)resultsHandler;
- (id)resultsQueue;
- (void)setDataclass:(id)arg1;
- (void)setResultsHandler:(id /* block */)arg1;
- (void)setResultsQueue:(id)arg1;
- (void)setSiJob:(struct __SIJobRef { }*)arg1;
- (struct __SIJobRef { }*)siJob;

@end
