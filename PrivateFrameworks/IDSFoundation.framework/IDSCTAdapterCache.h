
@interface IDSCTAdapterCache : NSObject {
    unsigned long long  _doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
    unsigned long long  _dualSIMEnabled;
    unsigned long long  _isAnySIMInserted;
    unsigned long long  _isAnySIMUsable;
    NSArray * _sims;
    unsigned long long  _supportsIdentification;
}

@property (nonatomic) unsigned long long doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
@property (nonatomic) unsigned long long dualSIMEnabled;
@property (nonatomic) unsigned long long isAnySIMInserted;
@property (nonatomic) unsigned long long isAnySIMUsable;
@property (nonatomic, retain) NSArray *sims;
@property (nonatomic) unsigned long long supportsIdentification;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)doesAnySIMSupportsSimultaneousVoiceAndDataRightNow;
- (unsigned long long)dualSIMEnabled;
- (unsigned long long)isAnySIMInserted;
- (unsigned long long)isAnySIMUsable;
- (void)setDoesAnySIMSupportsSimultaneousVoiceAndDataRightNow:(unsigned long long)arg1;
- (void)setDualSIMEnabled:(unsigned long long)arg1;
- (void)setIsAnySIMInserted:(unsigned long long)arg1;
- (void)setIsAnySIMUsable:(unsigned long long)arg1;
- (void)setSims:(id)arg1;
- (void)setSupportsIdentification:(unsigned long long)arg1;
- (id)sims;
- (unsigned long long)supportsIdentification;

@end
