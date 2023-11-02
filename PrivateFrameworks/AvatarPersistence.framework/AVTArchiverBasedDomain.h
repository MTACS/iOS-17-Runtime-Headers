
@interface AVTArchiverBasedDomain : NSObject <NSSecureCoding> {
    NSString * _domainIdentifier;
    NSString * _primaryAvatarIdentifier;
}

@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic, readonly, copy) NSString *primaryAvatarIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainBySettingPrimaryAvatarIdentifier:(id)arg1;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainIdentifier:(id)arg1 primaryAvatarIdentifier:(id)arg2;
- (id)primaryAvatarIdentifier;

@end
