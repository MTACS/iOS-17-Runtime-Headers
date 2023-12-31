
@interface ASDPurchaseRequestOptions : ASDRequestOptions {
    NSArray * _purchases;
}

@property (nonatomic, readonly) NSArray *purchases;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchases:(id)arg1;
- (id)purchases;

@end
