
@interface MAStatisticsElapsedTime : NSObject {
    long long  _elapsedCounter;
    double  _elapsedStart;
    double  _elapsedTime;
    double  _lastBeginTransactionTime;
    double  _lastEndTransactionTime;
}

- (void)begin;
- (void)dealloc;
- (double)elapsedTime;
- (double)elapsedTimeSinceLastBeginTransaction;
- (double)elapsedTimeSinceLastEndTransaction;
- (void)end;
- (id)init;
- (bool)isTransactionPending;

@end
