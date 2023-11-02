
@interface SIRINLUSystemReportedFailure : NSObject <SIRINLUSystemDialogAct> {
    USOSerializedGraph * _reason;
    USOSerializedGraph * _task;
    NSUUID * _taskId;
    NSString * renderedText;
}

@property (nonatomic, retain) USOSerializedGraph *reason;
@property (nonatomic, retain) NSString *renderedText;
@property (nonatomic, retain) USOSerializedGraph *task;
@property (nonatomic, retain) NSUUID *taskId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskId:(id)arg1 reason:(id)arg2 task:(id)arg3;
- (id)reason;
- (id)renderedText;
- (void)setReason:(id)arg1;
- (void)setRenderedText:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)task;
- (id)taskId;

@end
