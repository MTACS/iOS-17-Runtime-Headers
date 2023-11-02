
@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest {
    NSArray * _associatedDomains;
}

@property (nonatomic, copy) NSArray *associatedDomains;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedDomains;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;

@end
