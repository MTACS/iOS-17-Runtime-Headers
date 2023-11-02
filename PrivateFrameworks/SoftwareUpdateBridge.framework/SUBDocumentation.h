
@interface SUBDocumentation : NSObject <NSSecureCoding> {
    NSURL * _documentationBundleURL;
    NSString * _humanReadableUpdateName;
    NSData * _licenseAgreement;
    NSString * _phoneLanguage;
    NSData * _releaseNotes;
    NSData * _releaseNotesSummary;
}

@property (nonatomic, readonly, retain) NSString *currentPhoneLanguage;
@property (nonatomic, retain) NSURL *documentationBundleURL;
@property (nonatomic, retain) NSString *humanReadableUpdateName;
@property (nonatomic, retain) NSData *licenseAgreement;
@property (nonatomic, retain) NSString *phoneLanguage;
@property (nonatomic, readonly, retain) NSArray *preferredPhoneLanguages;
@property (nonatomic, retain) NSData *releaseNotes;
@property (nonatomic, retain) NSData *releaseNotesSummary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_loadBundleResources;
- (id)_resourceFromBundle:(id)arg1 forKey:(id)arg2;
- (id)currentPhoneLanguage;
- (id)documentationBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationBundleURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)licenseAgreement;
- (id)phoneLanguage;
- (id)preferredPhoneLanguages;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (void)setDocumentationBundleURL:(id)arg1;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setLicenseAgreement:(id)arg1;
- (void)setPhoneLanguage:(id)arg1;
- (void)setReleaseNotes:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;

@end
