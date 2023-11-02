
@interface CTCAConversationState : NSObject <NSCopying, NSSecureCoding> {
    bool  _committed;
    NSNumber * _conversationId;
    long long  _fromService;
    long long  _requestReason;
}

@property (nonatomic) bool committed;
@property (nonatomic, retain) NSNumber *conversationId;
@property (nonatomic) long long fromService;
@property (nonatomic) long long requestReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)committed;
- (id)conversationId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fromService;
- (id)initWithCoder:(id)arg1;
- (long long)requestReason;
- (void)setCommitted:(bool)arg1;
- (void)setConversationId:(id)arg1;
- (void)setFromService:(long long)arg1;
- (void)setRequestReason:(long long)arg1;

@end
