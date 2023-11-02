
@interface BBSectionMuteAssertion : BBMuteAssertion {
    NSDate * _expirationDate;
}

@property (nonatomic, readonly) NSDate *expirationDate;

+ (id)sectionMuteAssertionUntilDate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithExpirationDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (void)getNextExpirationDate:(id*)arg1 wasPurged:(bool*)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isActiveForThreadIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
