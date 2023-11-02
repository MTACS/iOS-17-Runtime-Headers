
@protocol HPSHomeAccessorySettingsInterfaceDelegate <NSObject>

@required

- (void)homekitaccessoryDidUpdateValueForEndpointIdentifier:(NSUUID *)arg1 keyPath:(NSString *)arg2 value:(HPSSetting *)arg3;

@end
