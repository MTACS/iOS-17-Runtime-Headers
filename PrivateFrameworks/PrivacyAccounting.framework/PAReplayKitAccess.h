
@interface PAReplayKitAccess : PAAccess {
    PAApplication * _broadcaster;
}

@property (nonatomic, readonly) PAApplication *broadcaster;

+ (id)accessWithAccessor:(id)arg1;
+ (id)accessWithAccessor:(id)arg1 fromBroadcaster:(id)arg2;
+ (id)eventStreamIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (id)broadcaster;
- (id)category;
- (id)copyWithNewBroadcaster:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hashWithOptions:(unsigned long long)arg1;
- (id)initWithAccessor:(id)arg1;
- (id)initWithAccessor:(id)arg1 broadcaster:(id)arg2 identifier:(id)arg3 kind:(long long)arg4;
- (id)initWithAccessor:(id)arg1 fromBroadcaster:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqualToAccess:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)proto;

@end
