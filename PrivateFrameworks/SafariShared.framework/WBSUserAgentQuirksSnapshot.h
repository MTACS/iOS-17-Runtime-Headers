
@interface WBSUserAgentQuirksSnapshot : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary * _domainsToQuirkTypes;
    NSDictionary * _sitesRequiringUserAgentQuirks;
    NSDictionary * _userAgentQuirks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlistData:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)plistDataWithFormat:(unsigned long long)arg1;
- (id)quirkTypeForURLString:(id)arg1 withDefaultUserAgent:(id)arg2;

@end
