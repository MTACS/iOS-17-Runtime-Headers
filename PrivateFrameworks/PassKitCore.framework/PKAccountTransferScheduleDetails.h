
@interface PKAccountTransferScheduleDetails : NSObject <NSSecureCoding> {
    unsigned long long  _frequency;
    NSTimeZone * _productTimeZone;
    NSDate * _scheduledDate;
    long long  _scheduledDay;
    NSString * _transferTermsIdentifier;
}

@property (nonatomic) unsigned long long frequency;
@property (nonatomic, copy) NSDate *scheduledDate;
@property (nonatomic) long long scheduledDay;
@property (nonatomic, copy) NSString *transferTermsIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frequency;
- (unsigned long long)hash;
- (id)hashString;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 productTimeZone:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionaryRepresentation;
- (id)jsonString;
- (id)scheduledDate;
- (long long)scheduledDay;
- (void)setFrequency:(unsigned long long)arg1;
- (void)setScheduleTimeZone:(id)arg1;
- (void)setScheduledDate:(id)arg1;
- (void)setScheduledDay:(long long)arg1;
- (void)setTransferTermsIdentifier:(id)arg1;
- (id)transferTermsIdentifier;

@end
