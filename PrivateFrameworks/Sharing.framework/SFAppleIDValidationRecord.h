
@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSData * _data;
    NSString * _identifier;
    NSDate * _nextCheckDate;
    unsigned long long  _suggestedValidDuration;
    NSDate * _validStartDate;
    NSArray * _validatedEmailHashes;
    NSArray * _validatedPhoneHashes;
    NSNumber * _version;
}

@property (nonatomic, retain) NSString *altDSID;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isInvalid;
@property (nonatomic, readonly) bool needsUpdate;
@property (nonatomic, retain) NSDate *nextCheckDate;
@property (nonatomic) unsigned long long suggestedValidDuration;
@property (nonatomic, retain) NSDate *validStartDate;
@property (nonatomic, retain) NSArray *validatedEmailHashes;
@property (nonatomic, retain) NSArray *validatedPhoneHashes;
@property (nonatomic, retain) NSNumber *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToValidationRecord:(id)arg1;
- (bool)isInvalid;
- (bool)needsUpdate;
- (id)nextCheckDate;
- (void)setAltDSID:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNextCheckDate:(id)arg1;
- (void)setSuggestedValidDuration:(unsigned long long)arg1;
- (void)setValidStartDate:(id)arg1;
- (void)setValidatedEmailHashes:(id)arg1;
- (void)setValidatedPhoneHashes:(id)arg1;
- (void)setVersion:(id)arg1;
- (unsigned long long)suggestedValidDuration;
- (id)validStartDate;
- (id)validatedEmailHashes;
- (id)validatedPhoneHashes;
- (id)version;

@end
