
@protocol SFCertificateWarningJSControllerMethods <JSExport>

@required

- (NSString *)bypassFeatureButtonText;
- (NSString *)bypassFeatureIconPath;
- (NSString *)bypassFeatureTitleText;
- (void)bypassFeatureVisitWebsite;
- (NSString *)bypassFeatureWarningText;
- (void)goBackSelected;
- (void)openClockSettings;
- (void)pageLoaded;
- (void)showCertificateInformation;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end
