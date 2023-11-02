
@interface BMSiriExecution : BMEventBase <BMStoreData> {
    NSString * _appBundleID;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _intentName;
    NSString * _interactionID;
    double  _raw_absoluteTimestamp;
    NSString * _slotValue;
    NSString * _statusReason;
    NSString * _taskId;
    int  _taskStep;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *appBundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *intentName;
@property (nonatomic, readonly) NSString *interactionID;
@property (nonatomic, readonly) NSString *slotValue;
@property (nonatomic, readonly) NSString *statusReason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *taskId;
@property (nonatomic, readonly) int taskStep;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)appBundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTaskId:(id)arg1 taskStep:(int)arg2 statusReason:(id)arg3 slotValue:(id)arg4 intentName:(id)arg5 appBundleID:(id)arg6 interactionID:(id)arg7 absoluteTimestamp:(id)arg8;
- (id)intentName;
- (id)interactionID;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)slotValue;
- (id)statusReason;
- (id)taskId;
- (int)taskStep;
- (void)writeTo:(id)arg1;

@end
