
@interface TAAnalyticsManagerSettings : NSObject {
    bool  _enableSubmission;
    unsigned long long  _settingsVersion;
}

@property bool enableSubmission;
@property (nonatomic) unsigned long long settingsVersion;

- (bool)enableSubmission;
- (id)init;
- (id)initWithEnableSubmissionOrDefault:(id)arg1 andSettingsVersion:(unsigned long long)arg2;
- (void)setEnableSubmission:(bool)arg1;
- (void)setSettingsVersion:(unsigned long long)arg1;
- (unsigned long long)settingsVersion;

@end
