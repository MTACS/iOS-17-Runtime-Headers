
@protocol TUConversationNoticeProtocol <NSObject, NSSecureCoding>

@required

- (NSUUID *)UUID;
- (long long)sessionEventType;
- (void)setSessionEventType:(long long)arg1;

@end
