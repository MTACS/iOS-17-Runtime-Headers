
@interface DAHolidayCalendarsFetchContext : NSObject {
    id /* block */  _completionBlock;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _resultsBlock;
}

@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly, copy) id /* block */ resultsBlock;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (void)finishedWithError:(id)arg1;
- (id)initWithResultsBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)queue;
- (id /* block */)resultsBlock;
- (void)resultsReturned:(id)arg1;
- (void)setQueue:(id)arg1;

@end
