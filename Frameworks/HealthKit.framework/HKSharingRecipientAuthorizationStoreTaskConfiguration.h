
@interface HKSharingRecipientAuthorizationStoreTaskConfiguration : HKTaskConfiguration {
    HKSharingRecipientIdentifier * _recipientIdentifier;
}

@property (nonatomic, copy) HKSharingRecipientIdentifier *recipientIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recipientIdentifier;
- (void)setRecipientIdentifier:(id)arg1;

@end
