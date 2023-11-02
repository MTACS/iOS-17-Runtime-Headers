
@interface NewsAnalytics.PrivacyValidationProvider : NSObject <FCNewsAppConfigurationObserving> {
    void appConfigurationManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  privacyValidation;
}

- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 appConfigurationDidChange:(id)arg2;
- (id)init;

@end
