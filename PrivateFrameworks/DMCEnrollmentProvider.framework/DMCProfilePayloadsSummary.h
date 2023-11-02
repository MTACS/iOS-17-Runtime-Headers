
@interface DMCProfilePayloadsSummary : NSObject <NSSecureCoding> {
    NSArray * _accountSections;
    NSArray * _byodInfoSections;
    long long  _finalInstallationWarningStyle;
    NSArray * _managedAppSections;
    NSString * _managedAppleID;
    NSArray * _managedBookSections;
    NSArray * _moreDetailsSections;
    NSArray * _payloadInfoSectionSummaries;
    NSArray * _restrictionSections;
}

@property (nonatomic, retain) NSArray *accountSections;
@property (nonatomic, retain) NSArray *byodInfoSections;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (nonatomic, retain) NSArray *managedAppSections;
@property (nonatomic, retain) NSString *managedAppleID;
@property (nonatomic, retain) NSArray *managedBookSections;
@property (nonatomic, retain) NSArray *moreDetailsSections;
@property (nonatomic, retain) NSArray *payloadInfoSectionSummaries;
@property (nonatomic, retain) NSArray *restrictionSections;

+ (void)_addObjectsOfClass:(Class)arg1 fromArray:(id)arg2 toArray:(id)arg3;
+ (id)_installedManagedAppIDs;
+ (bool)_isInstalledMDMProfile:(id)arg1;
+ (bool)_isMDMProfile:(id)arg1;
+ (id)_localizedPayloadSummaryByType:(id)arg1;
+ (id)_managedBooks;
+ (id)_signedByStringFromProfile:(id)arg1;
+ (id)_sortedPayloads:(id)arg1;
+ (id)_warningTextFromPayload:(id)arg1;
+ (id)summaryForProfile:(id)arg1 showManagedPayloads:(bool)arg2 dataSource:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountSections;
- (id)byodInfoSections;
- (void)encodeWithCoder:(id)arg1;
- (long long)finalInstallationWarningStyle;
- (id)initWithCoder:(id)arg1;
- (id)managedAppSections;
- (id)managedAppleID;
- (id)managedBookSections;
- (id)moreDetailsSections;
- (id)payloadInfoSectionSummaries;
- (id)restrictionSections;
- (void)setAccountSections:(id)arg1;
- (void)setByodInfoSections:(id)arg1;
- (void)setFinalInstallationWarningStyle:(long long)arg1;
- (void)setManagedAppSections:(id)arg1;
- (void)setManagedAppleID:(id)arg1;
- (void)setManagedBookSections:(id)arg1;
- (void)setMoreDetailsSections:(id)arg1;
- (void)setPayloadInfoSectionSummaries:(id)arg1;
- (void)setRestrictionSections:(id)arg1;

@end
