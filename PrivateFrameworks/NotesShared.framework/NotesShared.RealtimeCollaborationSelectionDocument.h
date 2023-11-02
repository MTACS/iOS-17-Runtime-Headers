
@interface NotesShared.RealtimeCollaborationSelectionDocument : ICCRDocument {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localParticipantID;
    void selections;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithReplica:(id)arg1;
- (id)initWithVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;
- (unsigned long long)mergeWithData:(id)arg1;

@end
