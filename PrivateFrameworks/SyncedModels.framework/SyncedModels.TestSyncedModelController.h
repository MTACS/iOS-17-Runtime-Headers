
@interface SyncedModels.TestSyncedModelController : SyncedModels.SyncedModelController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localParticipant;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  ownerState;
    void shouldReceiveOwnership;
}

@end
