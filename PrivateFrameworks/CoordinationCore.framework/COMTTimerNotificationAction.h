
@interface COMTTimerNotificationAction : COMTAction {
    NSString * _reason;
    NSArray * _timers;
}

@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSArray *timers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReason:(id)arg1 timers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (id)timers;

@end
