
@interface SBPreferenceChangeDodgingModifierEvent : SBDodgingModifierEvent {
    NSString * _identifier;
    unsigned long long  _phase;
    unsigned long long  _style;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) unsigned long long style;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 phase:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (unsigned long long)phase;
- (unsigned long long)style;
- (unsigned long long)type;

@end
