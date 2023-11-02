
@interface PKDeferredPaymentSummaryItem : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    NSDate * _deferredDate;
}

@property (nonatomic, copy) NSDate *deferredDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredDate;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeferredPaymentSummaryItem:(id)arg1;
- (void)setDeferredDate:(id)arg1;

@end
