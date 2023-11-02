
@interface SiriLongPressButtonContext : SiriContext {
    NSUUID * _activationEventInstrumentationIdentifier;
    double  _buttonDownTimestamp;
    long long  _longPressBehavior;
}

@property (nonatomic, retain) NSUUID *activationEventInstrumentationIdentifier;
@property (nonatomic) double buttonDownTimestamp;
@property (nonatomic) long long longPressBehavior;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationEventInstrumentationIdentifier;
- (double)buttonDownTimestamp;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)longPressBehavior;
- (void)setActivationEventInstrumentationIdentifier:(id)arg1;
- (void)setButtonDownTimestamp:(double)arg1;
- (void)setLongPressBehavior:(long long)arg1;

@end
