
@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSString * _deviceIdentifier;
    bool  _fromRequest;
    NSString * _idsIdentifier;
    unsigned short  _messageID;
    NSDictionary * _userInfo;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
