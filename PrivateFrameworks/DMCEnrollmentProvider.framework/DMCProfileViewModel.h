
@interface DMCProfileViewModel : NSObject {
    NSArray * _accountSections;
    NSArray * _byodInfoSections;
    NSArray * _elevatedPayloadTypes;
    long long  _finalInstallationWarningStyle;
    NSArray * _managedAppSections;
    NSString * _managedAppleID;
    NSArray * _managedBookSections;
    NSArray * _moreDetailsSections;
    NSArray * _payloadInfoSectionSummaries;
    MCProfile * _profile;
    <DMCProfileUIDataProvider> * _profileUIDataProvider;
    NSArray * _restrictionSections;
    bool  _showManagedPayloads;
}

@property (nonatomic, readonly) NSArray *accountSections;
@property (nonatomic, readonly) NSArray *byodInfoSections;
@property (nonatomic, readonly) NSArray *elevatedPayloadTypes;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (nonatomic, readonly) NSArray *managedAppSections;
@property (nonatomic, readonly, copy) NSString *managedAppleID;
@property (nonatomic, readonly) NSArray *managedBookSections;
@property (nonatomic, readonly) NSArray *moreDetailsSections;
@property (nonatomic, readonly) NSArray *payloadInfoSectionSummaries;
@property (nonatomic, readonly) MCProfile *profile;
@property (nonatomic, retain) <DMCProfileUIDataProvider> *profileUIDataProvider;
@property (nonatomic, readonly) NSArray *restrictionSections;
@property (nonatomic) bool showManagedPayloads;

+ (id)trustTextForProfile:(id)arg1 outIsTrusted:(bool*)arg2;

- (void).cxx_destruct;
- (void)_determineAvailableElevatedPayloadInfoTypes;
- (void)_managedAppsChanged:(id)arg1;
- (void)_managedBooksChanged:(id)arg1;
- (long long)_numberOfItemsInSectionsArray:(id)arg1;
- (void)_profilesUpdated:(id)arg1;
- (void)_reloadProfile:(id)arg1;
- (id)accountSections;
- (id)byodInfoSections;
- (void)dealloc;
- (id)elevatedPayloadTypes;
- (long long)finalInstallationWarningStyle;
- (id)initWithProfile:(id)arg1 managedPayloads:(bool)arg2;
- (id)initWithProfile:(id)arg1 managedPayloads:(bool)arg2 profileUIDataProvider:(id)arg3;
- (bool)isMDMProfile;
- (id)managedAppSections;
- (id)managedAppleID;
- (id)managedBookSections;
- (bool)managesAppID:(id)arg1;
- (bool)managesBook:(id)arg1;
- (id)moreDetailsSections;
- (long long)numberOfAccounts;
- (long long)numberOfManagedApps;
- (long long)numberOfManagedBooks;
- (long long)numberOfRestrictions;
- (id)payloadInfoSectionSummaries;
- (id)profile;
- (id)profileUIDataProvider;
- (id)restrictionSections;
- (void)setFinalInstallationWarningStyle:(long long)arg1;
- (void)setProfile:(id)arg1 managedPayloads:(bool)arg2;
- (void)setProfileUIDataProvider:(id)arg1;
- (void)setShowManagedPayloads:(bool)arg1;
- (bool)showManagedPayloads;

@end
