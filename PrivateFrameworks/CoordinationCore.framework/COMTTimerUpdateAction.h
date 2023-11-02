
@interface COMTTimerUpdateAction : COMTAction {
    MTTimer * _timer;
}

@property (nonatomic, readonly, copy) MTTimer *timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimer:(id)arg1;
- (id)timer;

@end
