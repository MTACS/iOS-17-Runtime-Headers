
@interface SFProductInventoryResult : NSObject <NSCopying, NSSecureCoding, SFProductInventoryResult> {
    NSArray * _availability;
    NSString * _productIdentifier;
}

@property (nonatomic, copy) NSArray *availability;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *productIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availability;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)productIdentifier;
- (void)setAvailability:(id)arg1;
- (void)setProductIdentifier:(id)arg1;

@end
