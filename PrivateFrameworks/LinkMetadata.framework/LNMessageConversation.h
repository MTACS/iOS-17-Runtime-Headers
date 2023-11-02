
@interface LNMessageConversation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _groupName;
    NSString * _messageConversationIdentifier;
    NSArray * _recipients;
}

@property (nonatomic, readonly, copy) NSString *groupName;
@property (nonatomic, readonly, copy) NSString *messageConversationIdentifier;
@property (nonatomic, readonly, copy) NSArray *recipients;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageConversationIdentifier:(id)arg1 groupName:(id)arg2 recipients:(id)arg3;
- (id)messageConversationIdentifier;
- (id)recipients;

@end
