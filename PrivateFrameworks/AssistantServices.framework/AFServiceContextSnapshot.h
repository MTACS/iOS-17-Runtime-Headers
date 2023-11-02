
@interface AFServiceContextSnapshot : NSObject <NSSecureCoding> {
    NSDate * _deliveryDate;
}

@property (nonatomic, readonly, copy) NSDate *deliveryDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deliveryDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeliveryDate:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
