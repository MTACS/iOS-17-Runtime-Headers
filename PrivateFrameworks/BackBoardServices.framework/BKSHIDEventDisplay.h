
@interface BKSHIDEventDisplay : NSObject <BSProtobufSerializable, NSCopying, NSSecureCoding> {
    bool  _builtin;
    NSString * _hardwareIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)arg1;
+ (id)nullDisplay;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_hardwareIdentifier;
- (id)_initWithHardwareIdentifier:(id)arg1;
- (bool)_isBuiltinDisplay;
- (bool)_isNullDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
