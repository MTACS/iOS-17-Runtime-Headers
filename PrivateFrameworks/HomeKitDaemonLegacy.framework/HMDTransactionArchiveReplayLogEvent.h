
@interface HMDTransactionArchiveReplayLogEvent : HMDLaunchTimingEvent {
    long long  _numUncommittedAndPushedRecords;
    long long  _numUncommittedRecords;
}

@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly) long long numUncommittedRecords;

- (id)initWithNumUncommittedRecords:(long long)arg1 numUncommittedAndPushedRecords:(long long)arg2;
- (long long)numUncommittedAndPushedRecords;
- (long long)numUncommittedRecords;

@end
