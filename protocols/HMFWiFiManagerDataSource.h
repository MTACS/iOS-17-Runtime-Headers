
@protocol HMFWiFiManagerDataSource <NSObject>

@required

+ (NSString *)MACAddressString;

- (void)activateWithOptions:(unsigned long long)arg1;
- (unsigned long long)assertionOptions;
- (HMFWifiNetworkAssociation *)currentNetworkAssociation;
- (NSNumber *)currentNetworkRSSI;
- (void)deactivate;
- (<HMFWiFiManagerDataSourceDelegate> *)delegate;
- (bool)isAssertionActive;
- (bool)isCaptive;
- (bool)isWoWAsserted;
- (void)performBlockAfterWoWReassertionDelay:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <HMFWiFiManagerDataSourceDelegate>)arg1;
- (void)setWoWAsserted:(bool)arg1;

@end
