
@interface BKSHIDKeyboardDeviceProperties : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _capsLockKeyHasLanguageSwitchLabel;
    unsigned char  _countryCode;
    bool  _globeKeyLabelHasGlobeSymbol;
    NSString * _language;
    NSString * _layout;
    unsigned int  _standardType;
    long long  _subinterfaceID;
    NSString * _transport;
}

@property (nonatomic, readonly) bool capsLockKeyHasLanguageSwitchLabel;
@property (nonatomic, readonly) unsigned char countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool globeKeyLabelHasGlobeSymbol;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSString *layout;
@property (nonatomic, readonly) unsigned int standardType;
@property (nonatomic, readonly) long long subinterfaceID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *transport;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (bool)capsLockKeyHasLanguageSwitchLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)countryCode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)globeKeyLabelHasGlobeSymbol;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)language;
- (id)layout;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)standardType;
- (long long)subinterfaceID;
- (id)transport;

@end
