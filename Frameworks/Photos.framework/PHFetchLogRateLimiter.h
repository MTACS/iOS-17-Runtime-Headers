
@interface PHFetchLogRateLimiter : NSObject {
    PFTokenBucket * _defaultTokenBucket;
    PFTokenBucket * _errorTokenBucket;
    PFTokenBucket * _faultTokenBucket;
}

+ (id)sharedRateLimiter;

- (void).cxx_destruct;
- (id)init;
- (unsigned char)rateLimitedLogForDefaultLog;
- (unsigned char)rateLimitedLogForErrorLog;
- (unsigned char)rateLimitedLogForFaultLog;
- (unsigned char)rateLimitedLogLevelForLogForLevel:(unsigned char)arg1;

@end
