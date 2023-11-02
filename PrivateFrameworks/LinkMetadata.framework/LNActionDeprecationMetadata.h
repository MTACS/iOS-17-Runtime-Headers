
@interface LNActionDeprecationMetadata : NSObject <NSCopying, NSSecureCoding> {
    LNStaticDeferredLocalizedString * _messageText;
    NSString * _replacedByIntentIdentifier;
}

@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *messageText;
@property (nonatomic, readonly, copy) NSString *replacedByIntentIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageText:(id)arg1 replacedByIntentIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)messageText;
- (id)replacedByIntentIdentifier;

@end
