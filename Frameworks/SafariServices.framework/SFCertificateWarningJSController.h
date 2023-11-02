
@interface SFCertificateWarningJSController : NSObject <SFCertificateWarningJSControllerMethods> {
    SFWebProcessPlugInCertificateWarningController * _certificateWarningController;
}

- (void).cxx_destruct;
- (id)bypassFeatureButtonText;
- (id)bypassFeatureIconPath;
- (id)bypassFeatureTitleText;
- (void)bypassFeatureVisitWebsite;
- (id)bypassFeatureWarningText;
- (void)goBackSelected;
- (id)initWithCertificateWarningController:(id)arg1;
- (void)openClockSettings;
- (void)pageLoaded;
- (void)showCertificateInformation;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end
