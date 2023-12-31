
@interface ASDPurchaseResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

@property (readonly) NSArray *items;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseResponseItems:(id)arg1;
- (id)items;

@end
