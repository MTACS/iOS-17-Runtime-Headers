
@interface HDCloudSyncManagerRemoveParticipantsTask : HDCloudSyncManagerPipelineTask {
    NSSet * _participantsToRemove;
    bool  _removeAllParticipants;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)arg1 context:(id)arg2 removeAllParticipants:(bool)arg3 participantsToRemove:(id)arg4 accessibilityAssertion:(id)arg5 completion:(id /* block */)arg6;
- (id)pipelineForRepository:(id)arg1;

@end
