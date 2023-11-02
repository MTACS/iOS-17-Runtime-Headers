
@interface SBHapticSwitcherEventResponse : SBSwitcherModifierEventResponse {
    long long  _hapticType;
    long long  _phase;
}

@property (nonatomic, readonly) long long hapticType;
@property (nonatomic, readonly) long long phase;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (long long)hapticType;
- (id)initWithHapticType:(long long)arg1 phase:(long long)arg2;
- (long long)phase;
- (long long)type;

@end
