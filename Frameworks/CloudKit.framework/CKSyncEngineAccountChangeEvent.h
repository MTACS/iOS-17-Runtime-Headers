
@interface CKSyncEngineAccountChangeEvent : CKSyncEngineEvent {
    long long  _changeType;
    CKRecordID * _currentUser;
    CKRecordID * _previousUser;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly, copy) CKRecordID *currentUser;
@property (nonatomic, readonly, copy) CKRecordID *previousUser;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (long long)changeType;
- (id)currentUser;
- (id)initWithPreviousUser:(id)arg1 currentUser:(id)arg2;
- (id)previousUser;
- (long long)type;

@end
