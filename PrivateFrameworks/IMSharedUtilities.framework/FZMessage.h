
@interface FZMessage : IMMessageItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;

@end
