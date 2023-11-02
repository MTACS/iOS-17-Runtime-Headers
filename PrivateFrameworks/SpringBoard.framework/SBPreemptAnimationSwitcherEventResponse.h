
@interface SBPreemptAnimationSwitcherEventResponse : SBSwitcherModifierEventResponse {
    unsigned long long  _options;
}

@property (nonatomic, readonly) unsigned long long options;

- (id)initWithOptions:(unsigned long long)arg1;
- (unsigned long long)options;
- (long long)type;

@end
