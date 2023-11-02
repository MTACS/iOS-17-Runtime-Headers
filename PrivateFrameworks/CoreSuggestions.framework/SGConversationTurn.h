
@interface SGConversationTurn : NSObject <NSCopying, NSSecureCoding, SGConversationTurnProtocol> {
    NSString * _senderID;
    NSString * _text;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSString *senderID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationTurn:(id)arg1;
- (id)senderID;
- (id)text;
- (id)timestamp;

@end
