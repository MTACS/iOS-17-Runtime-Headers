
@interface CNDASearchQueryConsumer : NSObject <DASearchQueryConsumer> {
    CNCountdownLatch * _latch;
    CNResult * _result;
    NSMutableArray * _results;
}

@property (readonly) CNResult *result;

+ (id /* block */)SuccessfulResults;

- (void).cxx_destruct;
- (id)initWithLatch:(id)arg1;
- (id)result;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;

@end
