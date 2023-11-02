
@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _conversationID;
    NSDate * _timebase;
}

@property (nonatomic, readonly) NSUUID *conversationID;
@property (nonatomic, readonly) NSDate *timebase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationID:(id)arg1 timebase:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationReport:(id)arg1;
- (id)timebase;

@end
