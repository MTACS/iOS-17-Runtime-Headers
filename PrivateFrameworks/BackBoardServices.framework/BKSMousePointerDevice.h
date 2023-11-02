
@interface BKSMousePointerDevice : NSObject <BSProtobufSerializable, NSCopying, NSSecureCoding> {
    bool  _hasVirtualMouseButtons;
    NSString * _manufacturerName;
    NSString * _preferenceKey;
    NSString * _productName;
    BKSHIDEventSenderDescriptor * _senderDescriptor;
    bool  _supportsDragLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasVirtualMouseButtons;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *preferenceKey;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, readonly, copy) BKSHIDEventSenderDescriptor *senderDescriptor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDragLock;

+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasVirtualMouseButtons;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderDescriptor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)manufacturerName;
- (id)preferenceKey;
- (id)preferences;
- (id)productName;
- (id)senderDescriptor;
- (void)setHasVirtualMouseButtons:(bool)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setPreferenceKey:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setSupportsDragLock:(bool)arg1;
- (bool)supportsDragLock;

@end
