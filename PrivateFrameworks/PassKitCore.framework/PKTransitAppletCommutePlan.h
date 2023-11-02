
@interface PKTransitAppletCommutePlan : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    NSString * _identifier;
    NSDate * _startDate;
    unsigned long long  _status;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) unsigned long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 expirationDate:(id)arg3 status:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommutePlan:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)status;

@end
