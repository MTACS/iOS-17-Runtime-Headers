
@interface SignpostSupportGraceTimeOverrideEntry : NSObject {
    SignpostSupportAnimationGraceTime * _defaultGraceTime;
    unsigned long long  _entryLevel;
    NSMutableDictionary * _overrides;
}

@property (nonatomic, retain) SignpostSupportAnimationGraceTime *defaultGraceTime;
@property (readonly) unsigned long long entryLevel;
@property (nonatomic, readonly) NSMutableDictionary *overrides;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)debugDescriptionWithWhitespacePrefix:(id)arg1;
- (id)defaultGraceTime;
- (unsigned long long)entryLevel;
- (id)initWithEntryLevel:(unsigned long long)arg1;
- (id)overrides;
- (void)setDefaultGraceTime:(id)arg1;

@end
