
@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent {
    NSString * _reason;
}

@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (long long)type;

@end
