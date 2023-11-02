
@interface CTCARoadsideConversationState : NSObject <NSCopying, NSSecureCoding> {
    bool  _committed;
    NSNumber * _conversationId;
    long long  _fromService;
    NSNumber * _providerId;
}

@property (nonatomic) bool committed;
@property (nonatomic, retain) NSNumber *conversationId;
@property (nonatomic) long long fromService;
@property (nonatomic, retain) NSNumber *providerId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)committed;
- (id)conversationId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)fromService;
- (id)initWithCoder:(id)arg1;
- (id)providerId;
- (void)setCommitted:(bool)arg1;
- (void)setConversationId:(id)arg1;
- (void)setFromService:(long long)arg1;
- (void)setProviderId:(id)arg1;

@end
