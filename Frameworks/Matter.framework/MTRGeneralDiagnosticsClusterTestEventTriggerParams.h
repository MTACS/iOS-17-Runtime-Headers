
@interface MTRGeneralDiagnosticsClusterTestEventTriggerParams : NSObject <NSCopying> {
    NSData * _enableKey;
    NSNumber * _eventTrigger;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *enableKey;
@property (nonatomic, copy) NSNumber *eventTrigger;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enableKey;
- (id)eventTrigger;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setEnableKey:(id)arg1;
- (void)setEventTrigger:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
