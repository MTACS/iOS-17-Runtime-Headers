
@interface TRAPreferencesResolutionContext : NSObject {
    NSArray * _acquiredParticipants;
    TRAArbitrationInputs * _rawInputs;
    NSArray * _stageParticipantsRoles;
    TRAArbitrationInputs * _validatedInputs;
}

@property (nonatomic, readonly) NSArray *acquiredParticipants;
@property (nonatomic, readonly) TRAArbitrationInputs *rawInputs;
@property (nonatomic, readonly) NSArray *stageParticipantsRoles;
@property (nonatomic, readonly) TRAArbitrationInputs *validatedInputs;

- (void).cxx_destruct;
- (id)acquiredParticipants;
- (id)initWithAcquiredParticipants:(id)arg1 stageParticipantsRoles:(id)arg2 validatedInputs:(id)arg3 rawInputs:(id)arg4;
- (id)rawInputs;
- (id)stageParticipantsRoles;
- (id)validatedInputs;

@end
