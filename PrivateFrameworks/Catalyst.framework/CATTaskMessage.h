
@interface CATTaskMessage : CATMessage {
    NSUUID * _taskUUID;
}

@property (nonatomic, copy) NSUUID *taskUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1;
- (void)setTaskUUID:(id)arg1;
- (id)taskUUID;

@end
