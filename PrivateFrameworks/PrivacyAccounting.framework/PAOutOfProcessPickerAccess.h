
@interface PAOutOfProcessPickerAccess : PAAccess {
    long long  _pickerType;
}

@property (nonatomic, readonly) long long pickerType;

+ (id)accessWithAccessor:(id)arg1 forType:(long long)arg2;
+ (id)accessWithAuditToken:(struct { unsigned int x1[8]; })arg1 forType:(long long)arg2;
+ (id)eventStreamIdentifier;
+ (bool)supportsSecureCoding;

- (id)JSONObject;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForCategory;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hashWithOptions:(unsigned long long)arg1;
- (id)initWithAccessor:(id)arg1 forType:(long long)arg2;
- (id)initWithAccessor:(id)arg1 identifier:(id)arg2 kind:(long long)arg3 forType:(long long)arg4;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 forType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqualToAccess:(id)arg1 withOptions:(unsigned long long)arg2;
- (long long)pickerType;
- (id)proto;

@end
