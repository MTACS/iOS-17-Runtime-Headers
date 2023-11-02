
@interface AMSUIDAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {
    <AMSUIDAirplaneModeInquiryDelegate> * _delegate;
    RadiosPreferences * _radiosPreferences;
}

@property (nonatomic) <AMSUIDAirplaneModeInquiryDelegate> *delegate;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) RadiosPreferences *radiosPreferences;

+ (id)settingsURL;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (id)delegate;
- (id)init;
- (bool)isEnabled;
- (id)radiosPreferences;
- (void)setDelegate:(id)arg1;

@end
