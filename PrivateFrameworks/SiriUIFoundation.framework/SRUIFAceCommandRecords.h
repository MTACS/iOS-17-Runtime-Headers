
@interface SRUIFAceCommandRecords : NSObject <SRUIFAceCommandRecordDelegate> {
    <SRUIFAceCommandRecordsDelegate> * _delegate;
    NSMutableDictionary * _recordsByCommandIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SRUIFAceCommandRecordsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_recordsByCommandIdentifier, nonatomic, readonly) NSMutableDictionary *recordsByCommandIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_recordForAceCommand:(id)arg1;
- (id)_recordsByCommandIdentifier;
- (void)aceCommandRecordDidChangeResult:(id)arg1;
- (id)aceCommandWithIdentifier:(id)arg1;
- (id)delegate;
- (id)init;
- (id)pendingAddViewsWithReflectionDialogPhaseWithRefId:(id)arg1;
- (void)recordActionCompletedForAceCommand:(id)arg1 success:(bool)arg2;
- (void)recordActionStartedForAceCommand:(id)arg1;
- (void)recordActionStoppedForAceCommand:(id)arg1;
- (void)registerAceCommand:(id)arg1 completion:(id /* block */)arg2;
- (long long)resultForAceCommand:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
