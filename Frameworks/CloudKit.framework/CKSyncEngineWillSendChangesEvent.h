
@interface CKSyncEngineWillSendChangesEvent : CKSyncEngineEvent {
    CKSyncEngineSendChangesContext * _context;
}

@property (nonatomic, readonly) CKSyncEngineSendChangesContext *context;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)context;
- (id)initWithContext:(id)arg1;
- (long long)type;

@end
