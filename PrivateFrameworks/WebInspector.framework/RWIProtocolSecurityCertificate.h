
@interface RWIProtocolSecurityCertificate : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *dnsNames;
@property (nonatomic, copy) NSArray *ipAddresses;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic) double validFrom;
@property (nonatomic) double validUntil;

- (id)dnsNames;
- (id)ipAddresses;
- (void)setDnsNames:(id)arg1;
- (void)setIpAddresses:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setValidFrom:(double)arg1;
- (void)setValidUntil:(double)arg1;
- (id)subject;
- (double)validFrom;
- (double)validUntil;

@end
