
@interface MBDomainManager : NSObject {
    <MBDomainManagerDelegate> * _delegate;
    NSMutableDictionary * _domainsByName;
    NSDictionary * _systemDomainsByName;
    MBSystemDomainsVersions * _systemDomainsVersions;
}

@property (nonatomic) <MBDomainManagerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *domainsByName;
@property (nonatomic, retain) NSDictionary *systemDomainsByName;
@property (nonatomic, retain) MBSystemDomainsVersions *systemDomainsVersions;

+ (id)_readDomainsFromPlist:(id)arg1 accountType:(long long)arg2 userVolumeMountPoint:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_initWithAccountType:(long long)arg1 userVolumeMountPoint:(id)arg2 plistPath:(id)arg3 error:(id*)arg4;
- (id)_initWithSystemDomains:(id)arg1 versions:(id)arg2;
- (void)addDomain:(id)arg1;
- (void)addDomain:(id)arg1 forName:(id)arg2;
- (id)allDomains;
- (bool)containsDomainName:(id)arg1;
- (id)delegate;
- (id)domainForName:(id)arg1;
- (id)domainForPath:(id)arg1 relativePath:(id*)arg2;
- (id)domainsByName;
- (id)initForTestingWithDomains:(id)arg1;
- (id)initForTestingWithPersona:(id)arg1 systemDomainsPlistAtPath:(id)arg2;
- (id)initWithPersona:(id)arg1;
- (id)initWithSystemDomains:(id)arg1;
- (bool)isSystemDomainName:(id)arg1;
- (id)redirectDomain:(id)arg1 forRelativePath:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDomainsByName:(id)arg1;
- (void)setSystemDomainsByName:(id)arg1;
- (void)setSystemDomainsVersions:(id)arg1;
- (id)systemDomainsByName;
- (id)systemDomainsVersions;

@end
