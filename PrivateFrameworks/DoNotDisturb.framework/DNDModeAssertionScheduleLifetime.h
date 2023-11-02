
@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime {
    unsigned long long  _behavior;
    NSString * _scheduleIdentifier;
}

@property (nonatomic, readonly) unsigned long long behavior;
@property (nonatomic, readonly, copy) NSString *scheduleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)behavior;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduleIdentifier:(id)arg1 behavior:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lifetimeType;
- (id)scheduleIdentifier;

@end
