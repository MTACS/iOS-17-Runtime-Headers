
@interface STAlarmShowAlarmAndPerformActionRequest : AFSiriRequest {
    STAlarmAction * _action;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithAction:(id)arg1;
- (id)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
