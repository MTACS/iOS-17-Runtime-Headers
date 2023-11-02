
@interface PRSPosterUpdatePropertyListPayload : PRSPosterUpdatePayload <NSSecureCoding> {
    NSData * _propertyListData;
    id  _propertyListRoot;
}

@property (nonatomic, readonly, copy) NSData *propertyListData;
@property (nonatomic, readonly, copy) id propertyListRoot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithPropertyListData:(id)arg1;
- (id)propertyListData;
- (id)propertyListRoot;
- (id)rawValue;

@end
