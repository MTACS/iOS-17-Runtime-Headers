
@interface SBAddModifierSwitcherEventResponse : SBSwitcherModifierEventResponse {
    NSString * _key;
    long long  _level;
    SBSwitcherModifier * _modifier;
}

@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly) SBSwitcherModifier *modifier;

- (void).cxx_destruct;
- (id)initWithModifier:(id)arg1 level:(long long)arg2;
- (id)initWithModifier:(id)arg1 level:(long long)arg2 key:(id)arg3;
- (id)key;
- (long long)level;
- (id)modifier;
- (long long)type;

@end
