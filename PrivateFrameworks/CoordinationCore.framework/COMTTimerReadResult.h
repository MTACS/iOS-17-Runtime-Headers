
@interface COMTTimerReadResult : COMTResult {
    bool  _isComplete;
    NSArray * _timers;
}

@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, readonly, copy) NSArray *timers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initChunkedWithActionIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimers:(id)arg1 actionIdentifier:(id)arg2;
- (bool)isComplete;
- (id)timers;

@end
