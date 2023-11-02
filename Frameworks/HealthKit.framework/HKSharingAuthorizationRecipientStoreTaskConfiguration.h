
@interface HKSharingAuthorizationRecipientStoreTaskConfiguration : HKTaskConfiguration {
    NSArray * _sharingAuthorizations;
}

@property (nonatomic, copy) NSArray *sharingAuthorizations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSharingAuthorizations:(id)arg1;
- (id)sharingAuthorizations;

@end
