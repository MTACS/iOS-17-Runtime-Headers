
@interface PKPassShareTimeConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    NSArray * _schedules;
    NSDate * _startDate;
    unsigned long long  _support;
}

@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) NSArray *schedules;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long support;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)intersect:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPassShareTimeConfiguration:(id)arg1;
- (id)schedules;
- (void)setExpirationDate:(id)arg1;
- (void)setSchedules:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSupport:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)support;

@end
