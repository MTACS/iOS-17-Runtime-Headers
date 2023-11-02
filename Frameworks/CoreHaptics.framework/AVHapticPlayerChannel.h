
@interface AVHapticPlayerChannel : NSObject {
    unsigned long long  _behavior;
    unsigned long long  _chanID;
    AVHapticClient * _client;
}

@property unsigned long long chanID;
@property AVHapticClient *client;
@property unsigned long long eventBehavior;

- (void).cxx_destruct;
- (unsigned long long)chanID;
- (bool)clearEvents:(double)arg1 error:(id*)arg2;
- (id)client;
- (unsigned long long)eventBehavior;
- (id)initWithChannelID:(id)arg1 client:(id)arg2;
- (void)invalidate;
- (bool)resetAtTime:(double)arg1 error:(id*)arg2;
- (bool)scheduleParameterCurve:(unsigned long long)arg1 curve:(id)arg2 atTime:(double)arg3 error:(id*)arg4;
- (bool)sendEvents:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)sendEvents:(id)arg1 withImmediateParameters:(id)arg2 atTime:(double)arg3 error:(id*)arg4;
- (void)setChanID:(unsigned long long)arg1;
- (void)setClient:(id)arg1;
- (void)setEventBehavior:(unsigned long long)arg1;
- (bool)setParameter:(unsigned long long)arg1 value:(float)arg2 atTime:(double)arg3 error:(id*)arg4;

@end
