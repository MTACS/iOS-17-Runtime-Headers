
@interface MTRActionsClusterInstantActionParams : NSObject <NSCopying> {
    NSNumber * _actionID;
    NSNumber * _invokeID;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *actionID;
@property (nonatomic, copy) NSNumber *invokeID;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)actionID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)invokeID;
- (id)serverSideProcessingTimeout;
- (void)setActionID:(id)arg1;
- (void)setInvokeID:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
