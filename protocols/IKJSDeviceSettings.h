
@protocol IKJSDeviceSettings <JSExport>

@required

- (NSString *)language;
- (IKJSRestrictions *)restrictions;
- (NSString *)storefrontCountryCode;

@end
