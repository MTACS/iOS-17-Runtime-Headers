
@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject {
    NSDictionary * _stateDictionary;
}

@property (nonatomic, copy) NSDictionary *stateDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStateDictionary:(id)arg1;
- (id)stateDictionary;

@end
