
@interface HMSoftwareUpdateDocumentation : NSObject <HFStateDumpBuildable, NSSecureCoding> {
    HMHTMLDocument * _licenseAgreement;
    NSNumber * _licenseAgreementVersion;
    HMHTMLDocument * _releaseNotes;
    HMHTMLDocument * _releaseNotesSummary;
    HMPlainTextDocument * _textReleaseNotes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMHTMLDocument *licenseAgreement;
@property (readonly, copy) NSNumber *licenseAgreementVersion;
@property (readonly, copy) HMHTMLDocument *releaseNotes;
@property (readonly, copy) HMHTMLDocument *releaseNotesSummary;
@property (readonly) Class superclass;
@property (readonly, copy) HMPlainTextDocument *textReleaseNotes;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)localizationsForBundle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 textReleaseNotes:(id)arg3 licenseAgreement:(id)arg4 licenseAgreementVersion:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)licenseAgreement;
- (id)licenseAgreementVersion;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (id)textReleaseNotes;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)localizationsForBundle:(id)arg1;

- (id)initWithBundle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)localizationsForBundle:(id)arg1;

- (id)initWithBundle:(id)arg1;

@end
