
@interface STTimerShowTimerAndPerformAction : AFSiriRequest {
    unsigned long long  _action;
    NSArray * _templateActions;
    NSArray * _timers;
}

@property (nonatomic, copy) NSArray *templateActions;
@property (nonatomic, copy) NSArray *timers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2;
- (id)_initWithTimers:(id)arg1 action:(unsigned long long)arg2;
- (id)_initWithTimers:(id)arg1 templateActions:(id)arg2 timerAction:(unsigned long long)arg3;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTemplateActions:(id)arg1;
- (void)setTimers:(id)arg1;
- (id)templateActions;
- (id)timer;
- (id)timers;

@end
