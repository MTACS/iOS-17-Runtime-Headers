
@interface ENExposureNotification : NSObject <NSSecureCoding> {
    ENExposureClassification * _classification;
    NSUUID * _identifier;
    NSURL * _learnMoreURL;
    NSDate * _legacyDate;
    NSString * _localizedBodyText;
    NSString * _localizedDetailBodyText;
    NSString * _localizedSubjectText;
    NSDate * _notificationDate;
    ENRegion * _region;
    bool  _revoked;
}

@property (nonatomic, retain) ENExposureClassification *classification;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSURL *learnMoreURL;
@property (nonatomic, copy) NSString *localizedBodyText;
@property (nonatomic, copy) NSString *localizedDetailBodyText;
@property (nonatomic, copy) NSString *localizedSubjectText;
@property (nonatomic, copy) NSDate *notificationDate;
@property (nonatomic, copy) ENRegion *region;
@property (nonatomic) bool revoked;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classification;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)learnMoreURL;
- (id)localizedBodyText;
- (id)localizedDetailBodyText;
- (id)localizedSubjectText;
- (id)notificationDate;
- (id)region;
- (bool)revoked;
- (void)setClassification:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLearnMoreURL:(id)arg1;
- (void)setLocalizedBodyText:(id)arg1;
- (void)setLocalizedDetailBodyText:(id)arg1;
- (void)setLocalizedSubjectText:(id)arg1;
- (void)setNotificationDate:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setRevoked:(bool)arg1;

@end
