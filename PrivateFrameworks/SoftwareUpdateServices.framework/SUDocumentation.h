
@interface SUDocumentation : NSObject <NSCopying, NSSecureCoding> {
    SUCoreDocumentation * _coreDocumentation;
    NSString * _primaryLanguage;
}

@property (nonatomic, retain) SUCoreDocumentation *coreDocumentation;
@property (nonatomic, retain) NSString *primaryLanguage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_resetIfNecessary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreDocumentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAnyDocumentation;
- (id)humanReadableUpdateName;
- (id)iconImage;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSUCoreDocumentation:(id)arg1;
- (id)licenseAgreement;
- (id)licenseAgreementFileName;
- (id)mandatoryUpdateBodyString;
- (id)notificationBodyString;
- (id)notificationTitleString;
- (id)primaryLanguage;
- (id)recommendedUpdateAlertBodyString;
- (id)recommendedUpdateTitleString;
- (id)releaseNotes;
- (id)releaseNotesFileName;
- (id)releaseNotesSummary;
- (id)releaseNotesSummaryFileName;
- (void)setCoreDocumentation:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (id)slaVersion;

@end
