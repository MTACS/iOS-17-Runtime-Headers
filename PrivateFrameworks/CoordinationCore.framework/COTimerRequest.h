
@interface COTimerRequest : COMeshRequest {
    MTTimer * _timer;
}

@property (nonatomic, readonly, copy) MTTimer *timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimer:(id)arg1;
- (id)timer;

@end
