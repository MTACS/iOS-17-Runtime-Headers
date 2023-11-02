
@protocol HMDWACDevice

@required

- (void)cancelConfigurationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)deviceID;
- (NSUUID *)identifier;
- (bool)isConfigured;
- (NSString *)name;
- (NSString *)ssid;
- (void)startConfigurationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)supportsAirPlay2;
- (id)underlyingDevice;

@end
