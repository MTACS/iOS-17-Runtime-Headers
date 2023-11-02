
@interface BKSHIDUISensorCharacteristics : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSSecureCoding> {
    bool  _hasDiscreteProximitySensor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDiscreteProximitySensor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (id)_init;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDiscreteProximitySensor;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopy;

@end
