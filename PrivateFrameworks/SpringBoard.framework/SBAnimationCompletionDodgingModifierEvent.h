
@interface SBAnimationCompletionDodgingModifierEvent : SBDodgingModifierEvent {
    bool  _finished;
    NSString * _identifier;
    bool  _retargeted;
}

@property (nonatomic, readonly) bool finished;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool retargeted;

- (void).cxx_destruct;
- (id)description;
- (bool)finished;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 finished:(bool)arg2 retargeted:(bool)arg3;
- (bool)retargeted;
- (unsigned long long)type;

@end
