
@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage {
    NSSet * _participantsToRemove;
    bool  _removeAllParticipants;
}

@property (nonatomic, copy) NSSet *participantsToRemove;
@property (nonatomic) bool removeAllParticipants;

- (void).cxx_destruct;
- (void)main;
- (id)participantsToRemove;
- (bool)removeAllParticipants;
- (void)setParticipantsToRemove:(id)arg1;
- (void)setRemoveAllParticipants:(bool)arg1;

@end
