
@interface AFGetTimerResponse : AFSiriResponse {
    STTimer * _timer;
}

@property (nonatomic, retain) STTimer *timer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
