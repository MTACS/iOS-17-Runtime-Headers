
@interface ICQQuotaInfoRequest : ICQUsageQuotaRequest

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1 accountStore:(id)arg2 detailed:(bool)arg3;
- (id)urlRequest;

@end
