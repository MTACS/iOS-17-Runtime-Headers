
@interface _BlastDoorLPWalletPassMetadata : _BlastDoorLPSpecializationMetadata {
    NSDate * _eventDate;
    NSDate * _expirationDate;
    NSString * _name;
    long long  _style;
}

@property (nonatomic, retain) NSDate *eventDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long style;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDate;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setEventDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
