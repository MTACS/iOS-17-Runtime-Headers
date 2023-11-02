
@interface SIRINLUUserStatedTask : NSObject <SIRINLUUserDialogAct> {
    USOSerializedGraph * _goal;
    USOSerializedGraph * _task;
}

@property (nonatomic, retain) USOSerializedGraph *goal;
@property (nonatomic, retain) USOSerializedGraph *task;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)goal;
- (id)initWithCoder:(id)arg1;
- (id)initWithGoal:(id)arg1;
- (id)initWithTask:(id)arg1;
- (void)setGoal:(id)arg1;
- (void)setTask:(id)arg1;
- (id)task;

@end
