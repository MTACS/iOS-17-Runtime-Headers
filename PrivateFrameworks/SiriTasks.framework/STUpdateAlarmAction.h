
@interface STUpdateAlarmAction : STAlarmAction {
    NSArray * _modifications;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithModifications:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modifications;

@end
