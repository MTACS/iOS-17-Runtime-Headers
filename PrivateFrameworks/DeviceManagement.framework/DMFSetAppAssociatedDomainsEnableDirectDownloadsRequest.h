
@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest {
    NSNumber * _associatedDomainsEnableDirectDownloads;
}

@property (nonatomic, copy) NSNumber *associatedDomainsEnableDirectDownloads;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedDomainsEnableDirectDownloads;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAssociatedDomainsEnableDirectDownloads:(id)arg1;

@end
