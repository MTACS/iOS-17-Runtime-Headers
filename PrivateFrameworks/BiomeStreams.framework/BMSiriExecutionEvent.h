
@interface BMSiriExecutionEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    double  _absoluteTimestamp;
    NSString * _appBundleId;
    NSString * _intentName;
    NSString * _interactionId;
    NSString * _slotValue;
    NSString * _statusReason;
    NSString * _taskId;
    unsigned long long  _taskStep;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly, copy) NSString *appBundleId;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *intentName;
@property (nonatomic, readonly, copy) NSString *interactionId;
@property (nonatomic, readonly, copy) NSString *slotValue;
@property (nonatomic, readonly, copy) NSString *statusReason;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *taskId;
@property (nonatomic, readonly) unsigned long long taskStep;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)appBundleId;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithTaskID:(id)arg1 taskStep:(unsigned long long)arg2 statusReason:(id)arg3 slotValue:(id)arg4 intentName:(id)arg5;
- (id)initWithTaskID:(id)arg1 taskStep:(unsigned long long)arg2 statusReason:(id)arg3 slotValue:(id)arg4 intentName:(id)arg5 appBundleId:(id)arg6 interactionId:(id)arg7;
- (id)initWithTaskID:(id)arg1 taskStep:(unsigned long long)arg2 statusReason:(id)arg3 slotValue:(id)arg4 intentName:(id)arg5 appBundleId:(id)arg6 interactionId:(id)arg7 absoluteTimestamp:(double)arg8;
- (id)intentName;
- (id)interactionId;
- (bool)isEqual:(id)arg1;
- (id)proto;
- (id)serialize;
- (id)slotValue;
- (id)statusReason;
- (id)taskId;
- (unsigned long long)taskStep;

@end
