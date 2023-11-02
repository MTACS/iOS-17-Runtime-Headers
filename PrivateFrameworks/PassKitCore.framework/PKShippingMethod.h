
@interface PKShippingMethod : PKPaymentSummaryItem <NSCopying, NSSecureCoding> {
    PKDateComponentsRange * _dateComponentsRange;
    NSString * _detail;
    NSString * _identifier;
}

@property (nonatomic, copy) PKDateComponentsRange *dateComponentsRange;
@property (nonatomic, copy) NSString *detail;
@property (nonatomic, copy) NSString *identifier;

+ (id)shippingMethodWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateComponentsRange;
- (id)detail;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToShippingMethod:(id)arg1;
- (void)setDateComponentsRange:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (id)shippingMethodProtobuf;

@end
