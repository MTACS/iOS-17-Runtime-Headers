
@interface MTRChannelClusterChangeChannelByNumberParams : NSObject <NSCopying> {
    NSNumber * _majorNumber;
    NSNumber * _minorNumber;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *majorNumber;
@property (nonatomic, copy) NSNumber *minorNumber;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)majorNumber;
- (id)minorNumber;
- (id)serverSideProcessingTimeout;
- (void)setMajorNumber:(id)arg1;
- (void)setMinorNumber:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
