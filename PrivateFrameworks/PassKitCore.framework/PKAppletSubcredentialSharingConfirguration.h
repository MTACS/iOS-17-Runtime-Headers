
@interface PKAppletSubcredentialSharingConfirguration : NSObject <NSSecureCoding> {
    PKPassShareActivationOptions * _activationOptions;
    NSArray * _entitlements;
    unsigned long long  _maxNumberOfSharedCredentials;
    unsigned long long  _numberOfShareableCredentials;
    bool  _sharingRequiresPassword;
}

@property (nonatomic, retain) PKPassShareActivationOptions *activationOptions;
@property (nonatomic) unsigned long long maxNumberOfSharedCredentials;
@property (nonatomic) unsigned long long numberOfShareableCredentials;
@property (nonatomic) bool sharingRequiresPassword;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationOptions;
- (id)asDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)maxNumberOfSharedCredentials;
- (unsigned long long)numberOfShareableCredentials;
- (void)setActivationOptions:(id)arg1;
- (void)setMaxNumberOfSharedCredentials:(unsigned long long)arg1;
- (void)setNumberOfShareableCredentials:(unsigned long long)arg1;
- (void)setSharingRequiresPassword:(bool)arg1;
- (bool)sharingRequiresPassword;

@end
