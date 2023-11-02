
@interface MRBaseBannerRequest : NSObject <MRBannerRequestRepresentable> {
    NSString * _bundleIdentifierAffinity;
    NSString * _requestIdentifier;
}

@property (nonatomic, retain) NSString *bundleIdentifierAffinity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *requestIdentifier;
@property (readonly) Class superclass;

+ (id)requestWithBundleIdentifierAffinity:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifierAffinity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifierAffinity:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requestIdentifier;
- (void)setBundleIdentifierAffinity:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;

@end
