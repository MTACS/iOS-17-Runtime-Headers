
@interface NETunnelProviderManager : NEVPNManager {
    NSArray * _appRules;
    NSArray * _associatedDomains;
    NSArray * _calendarDomains;
    NSArray * _contactsDomains;
    NSArray * _excludedDomains;
    NSArray * _mailDomains;
    NSArray * _safariDomains;
}

@property (copy) NSArray *appRules;
@property (copy) NSArray *associatedDomains;
@property (copy) NSArray *calendarDomains;
@property (copy) NSArray *contactsDomains;
@property (copy) NSArray *excludedDomains;
@property (copy) NSArray *mailDomains;
@property (readonly) long long routingMethod;
@property (copy) NSArray *safariDomains;

+ (id)forPerAppVPN;
+ (void)loadAllFromPreferencesWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)additionalSetup;
- (id)appRules;
- (id)associatedDomains;
- (id)calendarDomains;
- (id)contactsDomains;
- (id)copyAppRules;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)excludedDomains;
- (id)init;
- (id)initWithSessionType:(int)arg1 tunnelType:(long long)arg2;
- (bool)isProtocolTypeValid:(long long)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(id /* block */)arg1;
- (id)mailDomains;
- (long long)routingMethod;
- (id)safariDomains;
- (void)setAppRules:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;
- (void)setCalendarDomains:(id)arg1;
- (void)setContactsDomains:(id)arg1;
- (void)setExcludedDomains:(id)arg1;
- (void)setMailDomains:(id)arg1;
- (void)setSafariDomains:(id)arg1;

@end
