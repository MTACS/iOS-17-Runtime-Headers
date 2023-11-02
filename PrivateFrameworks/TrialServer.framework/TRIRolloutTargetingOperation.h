
@interface TRIRolloutTargetingOperation : NSObject {
    TRIServerContext * _context;
    TRIRolloutDatabase * _rolloutDatabase;
    <TRIRolloutTargeting> * _targeter;
}

@property (nonatomic, readonly) TRIServerContext *context;
@property (nonatomic, readonly) TRIRolloutDatabase *rolloutDatabase;
@property (nonatomic, readonly) <TRIRolloutTargeting> *targeter;

- (void).cxx_destruct;
- (bool)_targetRolloutDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 reportTelemetryToServer:(bool*)arg3 factorPackSetIdToActivate:(id*)arg4 shouldDisenroll:(bool*)arg5 error:(id*)arg6;
- (id)context;
- (id)initWithRolloutTargeter:(id)arg1 rolloutDatabase:(id)arg2 context:(id)arg3;
- (id)rolloutDatabase;
- (bool)targetRolloutDeployment:(id)arg1 appendingTelemetryToSupport:(id)arg2 reportTelemetryToServer:(bool*)arg3 factorPackSetIdToActivate:(id*)arg4 shouldDisenroll:(bool*)arg5 error:(id*)arg6;
- (id)targeter;

@end
