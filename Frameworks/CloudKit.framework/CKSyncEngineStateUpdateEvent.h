
@interface CKSyncEngineStateUpdateEvent : CKSyncEngineEvent {
    CKSyncEngineStateSerialization * _stateSerialization;
}

@property (nonatomic, readonly, copy) CKSyncEngineStateSerialization *stateSerialization;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)initWithStateSerialization:(id)arg1;
- (id)stateSerialization;
- (long long)type;

@end
