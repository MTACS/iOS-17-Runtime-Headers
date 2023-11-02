
@interface ILMessageFilterCapabilitiesQueryResponse : NSObject <NSSecureCoding> {
    NSArray * _promotionalSubActions;
    NSArray * _transactionalSubActions;
    NSString * _version;
}

@property (nonatomic, copy) NSArray *promotionalSubActions;
@property (nonatomic, copy) NSArray *transactionalSubActions;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilitiesResponse:(id)arg1;
- (id)promotionalSubActions;
- (void)setPromotionalSubActions:(id)arg1;
- (void)setTransactionalSubActions:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)transactionalSubActions;
- (id)version;

@end
