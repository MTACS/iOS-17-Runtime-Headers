
@interface SBUpdateLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse {
    unsigned long long  _options;
    long long  _updateMode;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long updateMode;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 updateMode:(long long)arg2;
- (unsigned long long)options;
- (long long)type;
- (long long)updateMode;

@end
