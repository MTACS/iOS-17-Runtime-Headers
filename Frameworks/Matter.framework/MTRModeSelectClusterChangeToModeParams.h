
@interface MTRModeSelectClusterChangeToModeParams : NSObject <NSCopying> {
    NSNumber * _newMode;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (getter=getNewMode, nonatomic, copy) NSNumber *newMode;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)getNewMode;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setNewMode:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
