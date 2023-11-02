
@interface MTRFaultInjectionClusterFailAtFaultParams : NSObject <NSCopying> {
    NSNumber * _id;
    NSNumber * _numCallsToFail;
    NSNumber * _numCallsToSkip;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _takeMutex;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _type;
}

@property (nonatomic, copy) NSNumber *id;
@property (nonatomic, copy) NSNumber *numCallsToFail;
@property (nonatomic, copy) NSNumber *numCallsToSkip;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *takeMutex;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)id;
- (id)init;
- (id)numCallsToFail;
- (id)numCallsToSkip;
- (id)serverSideProcessingTimeout;
- (void)setId:(id)arg1;
- (void)setNumCallsToFail:(id)arg1;
- (void)setNumCallsToSkip:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTakeMutex:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setType:(id)arg1;
- (id)takeMutex;
- (id)timedInvokeTimeoutMs;
- (id)type;

@end
