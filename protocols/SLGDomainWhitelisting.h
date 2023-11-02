
@protocol SLGDomainWhitelisting <NSObject>

@required

- (void)addDomain:(NSString *)arg1;
- (bool)allowUnspecifiedDomains;
- (bool)isDomainWhitelisted:(NSString *)arg1;
- (void)removeDomain:(NSString *)arg1;
- (void)setAllowUnspecifiedDomains:(bool)arg1;
- (NSSet *)whitelist;

@end
