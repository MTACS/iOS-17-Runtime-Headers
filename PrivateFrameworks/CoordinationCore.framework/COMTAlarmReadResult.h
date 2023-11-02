
@interface COMTAlarmReadResult : COMTResult {
    NSArray * _alarms;
    bool  _isComplete;
}

@property (nonatomic, readonly, copy) NSArray *alarms;
@property (nonatomic, readonly) bool isComplete;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alarms;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initChunkedWithActionIdentifier:(id)arg1;
- (id)initWithAlarms:(id)arg1 actionIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isComplete;

@end
