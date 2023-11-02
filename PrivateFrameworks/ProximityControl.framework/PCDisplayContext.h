
@interface PCDisplayContext : NSObject <NSSecureCoding> {
    long long  _interactionBehavior;
    long long  _interactionDirection;
    NSURL * _legacyAttachmentURL;
    NSString * _legacyBodyText;
    NSString * _localizedPrimaryAltText;
    NSString * _localizedSecondaryAltText;
}

@property (nonatomic) long long interactionBehavior;
@property (nonatomic) long long interactionDirection;
@property (nonatomic, copy) NSURL *legacyAttachmentURL;
@property (nonatomic, copy) NSString *legacyBodyText;
@property (nonatomic, copy) NSString *localizedPrimaryAltText;
@property (nonatomic, copy) NSString *localizedSecondaryAltText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)interactionBehavior;
- (long long)interactionDirection;
- (bool)isEqual:(id)arg1;
- (id)legacyAttachmentURL;
- (id)legacyBodyText;
- (id)localizedPrimaryAltText;
- (id)localizedSecondaryAltText;
- (void)setInteractionBehavior:(long long)arg1;
- (void)setInteractionDirection:(long long)arg1;
- (void)setLegacyAttachmentURL:(id)arg1;
- (void)setLegacyBodyText:(id)arg1;
- (void)setLocalizedPrimaryAltText:(id)arg1;
- (void)setLocalizedSecondaryAltText:(id)arg1;

@end
