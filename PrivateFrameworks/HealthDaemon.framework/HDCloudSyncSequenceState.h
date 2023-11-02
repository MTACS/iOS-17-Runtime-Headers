
@interface HDCloudSyncSequenceState : NSObject {
    NSArray * _recordIDsToDelete;
    NSArray * _recordsToSave;
    bool  _shouldClearRebaselineDeadline;
}

@property (nonatomic, readonly, copy) NSArray *recordIDsToDelete;
@property (nonatomic, readonly, copy) NSArray *recordsToSave;
@property (nonatomic, readonly) bool shouldClearRebaselineDeadline;

- (void).cxx_destruct;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 shouldClearRebaselineDeadline:(bool)arg3;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (bool)shouldClearRebaselineDeadline;

@end
