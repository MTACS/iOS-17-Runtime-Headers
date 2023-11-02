
@interface BMLighthouseLedgerMlruntimedEvent : BMEventBase <BMStoreData> {
    BMLighthouseLedgerMlruntimedEventScheduleStatus * _activityScheduleStatus;
    NSString * _contextID;
    bool  _hasRaw_timestamp;
    double  _raw_timestamp;
    BMLighthouseLedgerMlruntimedEventTaskEvent * _taskCompleted;
    BMLighthouseLedgerMlruntimedEventTaskEvent * _taskFetched;
    BMLighthouseLedgerMlruntimedEventTaskEvent * _taskScheduled;
    BMLighthouseLedgerTrialIdentifiers * _trialIdentifiers;
}

@property (nonatomic, readonly) BMLighthouseLedgerMlruntimedEventScheduleStatus *activityScheduleStatus;
@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMLighthouseLedgerMlruntimedEventTaskEvent *taskCompleted;
@property (nonatomic, readonly) BMLighthouseLedgerMlruntimedEventTaskEvent *taskFetched;
@property (nonatomic, readonly) BMLighthouseLedgerMlruntimedEventTaskEvent *taskScheduled;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) BMLighthouseLedgerTrialIdentifiers *trialIdentifiers;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)activityScheduleStatus;
- (id)contextID;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTrialIdentifiers:(id)arg1 contextID:(id)arg2 timestamp:(id)arg3 activityScheduleStatus:(id)arg4 taskFetched:(id)arg5 taskScheduled:(id)arg6 taskCompleted:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)taskCompleted;
- (id)taskFetched;
- (id)taskScheduled;
- (id)timestamp;
- (id)trialIdentifiers;
- (void)writeTo:(id)arg1;

@end
