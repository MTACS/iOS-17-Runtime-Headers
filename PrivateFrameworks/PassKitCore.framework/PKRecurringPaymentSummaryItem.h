
@interface PKRecurringPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    long long  _intervalCount;
    unsigned long long  _intervalUnit;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) long long intervalCount;
@property (nonatomic, readonly) bool intervalCountSpecified;
@property (nonatomic) unsigned long long intervalUnit;
@property (nonatomic, readonly) bool intervalUnitSpecified;
@property (nonatomic, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (long long)intervalCount;
- (bool)intervalCountSpecified;
- (unsigned long long)intervalUnit;
- (bool)intervalUnitSpecified;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecurringPaymentSummaryItem:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIntervalCount:(long long)arg1;
- (void)setIntervalUnit:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
