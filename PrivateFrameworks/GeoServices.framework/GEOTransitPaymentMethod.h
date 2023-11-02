
@interface GEOTransitPaymentMethod : NSObject <NSCopying> {
    GEOPBTransitPaymentMethod * _pbPaymentMethod;
    int  addValueNameType;
    NSString * identifier;
    unsigned long long  muid;
    int  paymentMethodType;
}

@property (nonatomic, readonly) int addValueNameType;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) int paymentMethodType;

- (void).cxx_destruct;
- (int)addValueNameType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)initWithPaymentMethod:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)muid;
- (int)paymentMethodType;

@end
