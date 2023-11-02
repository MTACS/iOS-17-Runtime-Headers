
@interface CRKHostResourcesConfiguration : NSObject <NSCopying> {
    NSObject<CRKIPAddressProviding> * _IPAddressProvider;
    unsigned long long  _maximumAllowedDownloads;
    unsigned short  _port;
    NSArray * _resourceURLs;
    <CRKIdentity> * _serverIdentity;
    NSArray * _trustedCertificates;
}

@property (nonatomic, retain) NSObject<CRKIPAddressProviding> *IPAddressProvider;
@property (nonatomic) unsigned long long maximumAllowedDownloads;
@property (nonatomic) unsigned short port;
@property (nonatomic, readonly, copy) NSArray *resourceURLs;
@property (nonatomic, readonly) <CRKIdentity> *serverIdentity;
@property (nonatomic, readonly, copy) NSArray *trustedCertificates;

- (void).cxx_destruct;
- (id)IPAddressProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedAnchorCertificates:(id)arg3;
- (id)initWithResourceURLs:(id)arg1 serverIdentity:(id)arg2 trustedCertificates:(id)arg3;
- (unsigned long long)maximumAllowedDownloads;
- (unsigned short)port;
- (id)resourceURLs;
- (id)serverIdentity;
- (void)setIPAddressProvider:(id)arg1;
- (void)setMaximumAllowedDownloads:(unsigned long long)arg1;
- (void)setPort:(unsigned short)arg1;
- (id)trustedCertificates;

@end
