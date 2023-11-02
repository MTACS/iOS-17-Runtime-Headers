
@interface MEMessageSenderMetadata : NSObject <NSSecureCoding> {
    bool  _isContact;
    bool  _isPrimarySender;
    bool  _isUnsubscribeHeaderPresent;
    bool  _isVIP;
    NSString * _senderEmailAddress;
}

@property (readonly) bool isContact;
@property (readonly) bool isPrimarySender;
@property (readonly) bool isUnsubscribeHeaderPresent;
@property (readonly) bool isVIP;
@property (readonly) NSString *senderEmailAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSenderEmailAddress:(id)arg1 isVIP:(bool)arg2 isContact:(bool)arg3 isUnsubscribeHeaderPresent:(bool)arg4 isPrimarySender:(bool)arg5;
- (bool)isContact;
- (bool)isEqual:(id)arg1;
- (bool)isPrimarySender;
- (bool)isUnsubscribeHeaderPresent;
- (bool)isVIP;
- (id)senderEmailAddress;

@end
