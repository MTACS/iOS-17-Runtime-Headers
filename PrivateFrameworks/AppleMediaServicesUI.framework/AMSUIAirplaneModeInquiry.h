
@interface AMSUIAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {
    <AMSUIAirplaneModeInquiryDelegate> * _delegate;
    RadiosPreferences * _radiosPreferences;
}

@property (nonatomic) <AMSUIAirplaneModeInquiryDelegate> *delegate;
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
