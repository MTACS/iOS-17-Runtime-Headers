
@interface _PSMessagesPinningSuggestion : NSObject <NSSecureCoding> {
    NSString * _chatGuid;
}

@property (nonatomic, readonly) NSString *chatGuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chatGuid;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithChatGuid:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
