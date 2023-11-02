
@interface CTSelectRoadsideProviderResponse : NSObject <NSCopying, NSSecureCoding> {
    bool  _conversationResumed;
    bool  _success;
}

@property (nonatomic) bool conversationResumed;
@property (nonatomic) bool success;

+ (bool)supportsSecureCoding;

- (bool)conversationResumed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTSelectRoadsideProviderResponse:(id)arg1;
- (void)setConversationResumed:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
