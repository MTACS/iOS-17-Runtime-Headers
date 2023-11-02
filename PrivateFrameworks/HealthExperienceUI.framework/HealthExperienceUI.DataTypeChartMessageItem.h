
@interface HealthExperienceUI.DataTypeChartMessageItem : NSObject <MFMessageComposeViewControllerDelegate> {
    void $__lazy_storage_$_cnCapabilitiesManager;
    void contact;
    void defaultICloudAccount;
    void hkType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  profileInformation;
    void reuseIdentifier;
    void uniqueIdentifier;
    void viewConfiguration;
}

- (void).cxx_destruct;
- (id)init;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;

@end
