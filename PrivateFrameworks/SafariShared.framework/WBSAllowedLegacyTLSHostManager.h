
@interface WBSAllowedLegacyTLSHostManager : NSObject {
    NSUserDefaults * _browserDefaults;
}

- (void).cxx_destruct;
- (void)allowLegacyTLSForHost:(id)arg1;
- (void)clearAllLegacyTLSHosts;
- (void)clearLegacyTLSForHostIfPresent:(id)arg1;
- (void)clearLegacyTLSForHosts:(id)arg1;
- (id)initWithBrowserDefaults:(id)arg1;
- (bool)isLegacyTLSAllowedForHost:(id)arg1;

@end
