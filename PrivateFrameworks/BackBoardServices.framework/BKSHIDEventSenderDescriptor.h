
@interface BKSHIDEventSenderDescriptor : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _associatedDisplay;
    bool  _authenticated;
    long long  _hardwareType;
    unsigned int  _primaryPage;
    unsigned int  _primaryUsage;
    unsigned long long  _senderID;
}

@property (nonatomic, readonly) BKSHIDEventDisplay *associatedDisplay;
@property (getter=isAuthenticated, nonatomic, readonly) bool authenticated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long hardwareType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int primaryPage;
@property (nonatomic, readonly) unsigned int primaryUsage;
@property (nonatomic, readonly) unsigned long long senderID;
@property (readonly) Class superclass;

+ (id)anyBuiltinTouchscreenDigitizer;
+ (id)anyDigitizer;
+ (id)build:(id /* block */)arg1;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;
+ (id)wildcard;

- (void).cxx_destruct;
- (id)_initWithHardwareType:(long long)arg1 associatedDisplay:(id)arg2 authenticated:(bool)arg3 primaryPage:(unsigned int)arg4 primaryUsage:(unsigned int)arg5 senderID:(unsigned long long)arg6;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)associatedDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hardwareType;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initFromPropertyList:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAuthenticated;
- (bool)isEqual:(id)arg1;
- (bool)matchesDescriptor:(id)arg1 failureReason:(id*)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)primaryPage;
- (unsigned int)primaryUsage;
- (id)propertyListEncoded;
- (unsigned long long)senderID;

@end
