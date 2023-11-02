
@interface MTRMediaPlaybackClusterSkipBackwardParams : NSObject <NSCopying> {
    NSNumber * _deltaPositionMilliseconds;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *deltaPositionMilliseconds;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaPositionMilliseconds;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setDeltaPositionMilliseconds:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
