
@interface SIRINLUUserWantedToPause : NSObject <SIRINLUUserDialogAct> {
    USOSerializedGraph * _reference;
    NSUUID * _taskId;
}

@property (nonatomic, retain) USOSerializedGraph *reference;
@property (nonatomic, retain) NSUUID *taskId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReference:(id)arg1;
- (id)initWithTaskId:(id)arg1 reference:(id)arg2;
- (id)reference;
- (void)setReference:(id)arg1;
- (void)setTaskId:(id)arg1;
- (id)taskId;

@end
