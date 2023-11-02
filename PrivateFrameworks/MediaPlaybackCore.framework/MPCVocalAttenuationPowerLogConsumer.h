
@interface MPCVocalAttenuationPowerLogConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    bool  _lastVocalAttenuationIsActive;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastVocalAttenuationIsActive;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;
+ (struct PPSTelemetryIdentifier { }*)telemetryID;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)lastVocalAttenuationIsActive;
- (void)reportVocalAttenuationIsActive:(bool)arg1 date:(id)arg2;
- (void)setLastVocalAttenuationIsActive:(bool)arg1;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
