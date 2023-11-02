
@interface SBRotationDodgingModifierEvent : SBDodgingModifierEvent {
    long long  _fromOrientation;
    NSUUID * _identifier;
    unsigned long long  _phase;
    long long  _toOrientation;
}

@property (nonatomic, readonly) long long fromOrientation;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) long long toOrientation;

- (void).cxx_destruct;
- (long long)fromOrientation;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 phase:(unsigned long long)arg4;
- (unsigned long long)phase;
- (long long)toOrientation;
- (unsigned long long)type;

@end
