
@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding> {
    NSString * _artistName;
    ASDBetaAppDisplayNames * _displayNames;
    NSDate * _expirationDate;
    bool  _feedbackEnabled;
    NSString * _iconURLTemplate;
    NSDate * _lastWelcomeScreenViewDate;
    bool  _launchScreenEnabled;
    NSDictionary * _localizedTestNotes;
    bool  _sharedFeedback;
    NSString * _testerEmail;
    ASDBetaAppVersion * _version;
}

@property (copy) NSString *artistName;
@property (copy) ASDBetaAppDisplayNames *displayNames;
@property (copy) NSDate *expirationDate;
@property (getter=isFeedbackEnabled) bool feedbackEnabled;
@property (copy) NSString *iconURLTemplate;
@property (copy) NSDate *lastWelcomeScreenViewDate;
@property (getter=isLaunchScreenEnabled) bool launchScreenEnabled;
@property (copy) NSDictionary *localizedTestNotes;
@property (getter=hasSharedFeedback) bool sharedFeedback;
@property (copy) NSString *testerEmail;
@property (copy) ASDBetaAppVersion *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artistName;
- (id)description;
- (id)displayNames;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)hasSharedFeedback;
- (id)iconURLTemplate;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFeedbackEnabled;
- (bool)isLaunchScreenEnabled;
- (id)lastWelcomeScreenViewDate;
- (id)localizedTestNotes;
- (void)setArtistName:(id)arg1;
- (void)setDisplayNames:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFeedbackEnabled:(bool)arg1;
- (void)setIconURLTemplate:(id)arg1;
- (void)setLastWelcomeScreenViewDate:(id)arg1;
- (void)setLaunchScreenEnabled:(bool)arg1;
- (void)setLocalizedTestNotes:(id)arg1;
- (void)setSharedFeedback:(bool)arg1;
- (void)setTesterEmail:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)testerEmail;
- (id)version;

@end
