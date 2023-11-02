
@interface RCPEventSenderProperties : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _properties;
    unsigned long long  _senderID;
    bool  _sendsMousePointerEvents;
}

@property (nonatomic, readonly, copy) NSDictionary *properties;
@property (nonatomic, readonly) unsigned long long senderID;
@property (nonatomic, readonly) bool sendsMousePointerEvents;

+ (id)_cachedPropertiesOrCacheIfNeeded:(id)arg1 senderID:(unsigned long long)arg2;
+ (bool)_isMouseSender:(id)arg1;
+ (id)_senderWithProperties:(id)arg1 senderID:(unsigned long long)arg2;
+ (id)crownSender;
+ (id)gamepadSender;
+ (id)globalPositionSender;
+ (id)keyboardSender;
+ (id)keyboardSenderForDisplayUUID:(id)arg1;
+ (id)mouseSender;
+ (id)naturalInputCollectionSender;
+ (id)pencilDigitizerSender;
+ (id)phoneButtonSender;
+ (id)senderFromIOHIDService:(struct __IOHIDServiceClient { }*)arg1;
+ (id)senderWithProperties:(id)arg1;
+ (id)senderWithProperties:(id)arg1 senderID:(unsigned long long)arg2;
+ (id)supplyMissingStandardProperties:(id)arg1 senderID:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;
+ (id)touchScreenDigitizerSender;
+ (id)touchScreenDigitizerSenderForDisplayUUID:(id)arg1;
+ (id)trackpadSender;
+ (id)tvRemoteSender;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)properties;
- (unsigned long long)senderID;
- (bool)sendsMousePointerEvents;

@end
