
@interface MSFlagTriageAction : MSFlagChangeTriageAction {
    unsigned long long  _cachedFlagState;
    NSNumber * _flagColor;
}

@property (nonatomic) unsigned long long cachedFlagState;
@property (nonatomic, retain) NSNumber *flagColor;

- (void).cxx_destruct;
- (bool)_isFlagged;
- (void)_toggleCachedFlagState;
- (void)_toggleFlagWithBuilder:(id)arg1;
- (unsigned long long)cachedFlagState;
- (id)flagColor;
- (bool)flagState;
- (void)setCachedFlagState:(unsigned long long)arg1;
- (void)setFlagColor:(id)arg1;

@end
