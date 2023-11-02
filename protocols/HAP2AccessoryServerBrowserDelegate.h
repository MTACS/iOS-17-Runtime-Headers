
@protocol HAP2AccessoryServerBrowserDelegate <NSObject>

@required

- (void)accessoryServerBrowser:(void *)arg1 didDiscoverPairedAccessoryServer:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: <HAP2AccessoryServerBrowser> *, <HAP2PairedAccessoryServer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)accessoryServerBrowser:(void *)arg1 didDiscoverUnpairedAccessoryServer:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: <HAP2AccessoryServerBrowser> *, <HAP2UnpairedAccessoryServer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didLosePairedAccessoryServer:(id <HAP2PairedAccessoryServer>)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didLoseUnpairedAccessoryServer:(id <HAP2UnpairedAccessoryServer>)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(id <HAP2AccessoryServerBrowser>)arg1 didStopDiscoveringWithError:(NSError *)arg2;

@end
