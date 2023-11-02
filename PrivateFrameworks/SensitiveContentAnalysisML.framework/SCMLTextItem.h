
@interface SCMLTextItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _conversationIdentifier;
    NSDate * _date;
    long long  _direction;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIdentifier:(id)arg1 date:(id)arg2 direction:(long long)arg3 text:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)text;

@end
