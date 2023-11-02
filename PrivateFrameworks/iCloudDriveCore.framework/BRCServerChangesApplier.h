
@interface BRCServerChangesApplier : NSObject {
    BRCAccountSessionFPFS * _session;
}

@property (nonatomic, readonly) BRCAccountSessionFPFS *session;

- (void).cxx_destruct;
- (bool)_handleServerItemBRAliasIfNeeded:(id)arg1 li:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (void)applyChanges:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4;
- (id)initWithAccountSession:(id)arg1;
- (id)session;

@end
