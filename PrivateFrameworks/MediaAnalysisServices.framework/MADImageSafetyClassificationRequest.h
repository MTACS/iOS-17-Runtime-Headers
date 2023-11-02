
@interface MADImageSafetyClassificationRequest : MADRequest {
    NSString * _conversationIdentifier;
    NSString * _stagedText;
}

@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, copy) NSString *stagedText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setStagedText:(id)arg1;
- (id)stagedText;

@end
