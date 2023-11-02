
@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding> {
    NSString * _anonymizationSalt;
    bool  _shouldRequestInvitation;
}

@property (nonatomic, retain) NSString *anonymizationSalt;
@property (nonatomic) bool shouldRequestInvitation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anonymizationSalt;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAnonymizationSalt:(id)arg1;
- (void)setShouldRequestInvitation:(bool)arg1;
- (bool)shouldRequestInvitation;

@end
