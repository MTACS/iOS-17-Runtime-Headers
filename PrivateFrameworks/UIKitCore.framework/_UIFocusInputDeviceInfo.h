
@interface _UIFocusInputDeviceInfo : NSObject <BSXPCCoding, NSCopying> {
    unsigned long long  _senderID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long senderID;
@property (readonly) Class superclass;

+ (id)infoWithSenderID:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithSenderID:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)senderID;

@end
