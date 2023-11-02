
@interface ICQQuotaAppDetailsRequest : ICQUsageQuotaRequest {
    NSArray * _bundleIDs;
    NSArray * _bundleIds;
}

@property (nonatomic, retain) NSArray *bundleIDs;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 bundleIDs:(id)arg3 quotaInfo:(id)arg4;
- (void)setBundleIDs:(id)arg1;
- (id)urlRequest;

@end
