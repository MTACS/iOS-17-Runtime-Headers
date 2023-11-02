
@interface NRDevicePropertyDiff : NRDiffBase {
    <NSObject><NSCopying> * _value;
}

@property (nonatomic, readonly) NRPBDevicePropertyDiff *protobuf;
@property (nonatomic, readonly) <NSObject><NSCopying> *value;

+ (id)enclosedClassTypes;
+ (id)packPropertyValue:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)unpackPropertyValue:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (id)value;

@end
