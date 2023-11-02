
@interface SIRINLUSystemReportedSuccess : NSObject <SIRINLUSystemDialogAct> {
    USOSerializedGraph * _task;
    NSUUID * _taskId;
    NSString * renderedText;
}

@property (nonatomic, retain) NSString *renderedText;
@property (nonatomic, retain) USOSerializedGraph *task;
@property (nonatomic, retain) NSUUID *taskId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskId:(id)arg1 task:(id)arg2;
- (id)renderedText;
- (void)setRenderedText:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)task;
- (id)taskId;

@end
