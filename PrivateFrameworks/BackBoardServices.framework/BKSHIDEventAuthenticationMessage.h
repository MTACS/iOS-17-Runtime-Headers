
@interface BKSHIDEventAuthenticationMessage : NSObject <BSDescriptionStreamable, BSProtobufSerializable, BSXPCCoding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _context;
    unsigned int  _eventType;
    BKSHIDEventHitTestLayerInformation * _hitTestInformationFromEndEvent;
    BKSHIDEventHitTestLayerInformation * _hitTestInformationFromStartEvent;
    unsigned long long  _originIdentifier;
    bool  _registrantEntitled;
    long long  _secureNameStatus;
    NSData * _signature;
    unsigned int  _targetContextID;
    unsigned int  _targetSlotID;
    unsigned long long  _timestamp;
    long long  _versionedPID;
}

@property (nonatomic, readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int eventType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent;
@property (nonatomic, readonly) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent;
@property (nonatomic, readonly) unsigned long long originIdentifier;
@property (nonatomic, readonly) bool registrantEntitled;
@property (nonatomic, readonly) long long secureNameStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int targetContextID;
@property (nonatomic, readonly) unsigned int targetSlotID;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic, readonly) long long versionedPID;

+ (id)new;
+ (id)protobufSchema;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned int)eventType;
- (unsigned long long)hash;
- (id)hitTestInformationFromEndEvent;
- (id)hitTestInformationFromStartEvent;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)originIdentifier;
- (bool)registrantEntitled;
- (long long)secureNameStatus;
- (unsigned int)targetContextID;
- (unsigned int)targetSlotID;
- (unsigned long long)timestamp;
- (long long)versionedPID;

@end
