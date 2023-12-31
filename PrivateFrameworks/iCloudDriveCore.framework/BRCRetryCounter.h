
@interface BRCRetryCounter : NSObject {
    long long  _latestRetry;
    unsigned int  _retryCount;
    bool  _scheduled;
    long long  _throttleHash;
}

@property (nonatomic, readonly) long long latestRetry;
@property (nonatomic, readonly) unsigned int retryCount;
@property (nonatomic, readonly) long long throttleHash;

- (void)incrementRetry;
- (id)initWithThrottleHash:(long long)arg1;
- (long long)latestRetry;
- (unsigned int)retryCount;
- (void)schedule;
- (long long)throttleHash;

@end
