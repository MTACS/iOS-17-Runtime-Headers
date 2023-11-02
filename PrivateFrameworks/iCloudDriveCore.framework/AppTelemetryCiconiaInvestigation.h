
@interface AppTelemetryCiconiaInvestigation : PBCodable <NSCopying> {
    long long  _accountQuotaUsage;
    bool  _areMigratedFaultsBelowThreshold;
    bool  _areNonFaultAllMigrated;
    long long  _bouncedDocumentsFoldersCount;
    long long  _bouncedItemsCount;
    long long  _bouncedItemsMatrix;
    long long  _ciconiaVersion;
    double  _cloningTime;
    NSString * _crashReporterKey;
    long long  _datalessItemsCount;
    long long  _diskSpaceLeft;
    long long  _documentsFoldersWithoutItemIDCount;
    long long  _expectedMigratedItemsCount;
    NSString * _experimentId;
    struct { 
        unsigned int accountQuotaUsage : 1; 
        unsigned int bouncedDocumentsFoldersCount : 1; 
        unsigned int bouncedItemsCount : 1; 
        unsigned int bouncedItemsMatrix : 1; 
        unsigned int ciconiaVersion : 1; 
        unsigned int cloningTime : 1; 
        unsigned int datalessItemsCount : 1; 
        unsigned int diskSpaceLeft : 1; 
        unsigned int documentsFoldersWithoutItemIDCount : 1; 
        unsigned int expectedMigratedItemsCount : 1; 
        unsigned int ignoredContentProtectedItems : 1; 
        unsigned int importTime : 1; 
        unsigned int itemsChangedDuringCloning : 1; 
        unsigned int itemsNotFoundInDB : 1; 
        unsigned int itemsNotMigratedCount : 1; 
        unsigned int materialisedOnCDItemsCount : 1; 
        unsigned int materialisedOnFPFSItemsCount : 1; 
        unsigned int packagesWithoutBundleBit : 1; 
        unsigned int previousAttempts : 1; 
        unsigned int previousFailedAttempts : 1; 
        unsigned int symlinkedDocumentsFolderCount : 1; 
        unsigned int totalItemCount : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int unexpectedCreations : 1; 
        unsigned int previousReleasesSuccessRate : 1; 
        unsigned int typesOfMigratedItemsMask : 1; 
        unsigned int typesOfNonMigratedItemsMask : 1; 
        unsigned int areMigratedFaultsBelowThreshold : 1; 
        unsigned int areNonFaultAllMigrated : 1; 
        unsigned int isAccountDataSeparated : 1; 
        unsigned int isDesktopEnabled : 1; 
        unsigned int manuallyTriggeredMigration : 1; 
    }  _has;
    long long  _ignoredContentProtectedItems;
    double  _importTime;
    bool  _isAccountDataSeparated;
    bool  _isDesktopEnabled;
    long long  _itemsChangedDuringCloning;
    long long  _itemsNotFoundInDB;
    long long  _itemsNotMigratedCount;
    bool  _manuallyTriggeredMigration;
    long long  _materialisedOnCDItemsCount;
    long long  _materialisedOnFPFSItemsCount;
    long long  _packagesWithoutBundleBit;
    long long  _previousAttempts;
    long long  _previousFailedAttempts;
    float  _previousReleasesSuccessRate;
    NSString * _rampId;
    long long  _symlinkedDocumentsFolderCount;
    long long  _totalItemCount;
    NSString * _treatmentId;
    int  _typesOfMigratedItemsMask;
    int  _typesOfNonMigratedItemsMask;
    long long  _underlyingErrorCode;
    NSString * _underlyingErrorDescription;
    NSString * _underlyingErrorDomain;
    long long  _unexpectedCreations;
}

@property (nonatomic) long long accountQuotaUsage;
@property (nonatomic) bool areMigratedFaultsBelowThreshold;
@property (nonatomic) bool areNonFaultAllMigrated;
@property (nonatomic) long long bouncedDocumentsFoldersCount;
@property (nonatomic) long long bouncedItemsCount;
@property (nonatomic) long long bouncedItemsMatrix;
@property (nonatomic) long long ciconiaVersion;
@property (nonatomic) double cloningTime;
@property (nonatomic, retain) NSString *crashReporterKey;
@property (nonatomic) long long datalessItemsCount;
@property (nonatomic) long long diskSpaceLeft;
@property (nonatomic) long long documentsFoldersWithoutItemIDCount;
@property (nonatomic) long long expectedMigratedItemsCount;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic) bool hasAccountQuotaUsage;
@property (nonatomic) bool hasAreMigratedFaultsBelowThreshold;
@property (nonatomic) bool hasAreNonFaultAllMigrated;
@property (nonatomic) bool hasBouncedDocumentsFoldersCount;
@property (nonatomic) bool hasBouncedItemsCount;
@property (nonatomic) bool hasBouncedItemsMatrix;
@property (nonatomic) bool hasCiconiaVersion;
@property (nonatomic) bool hasCloningTime;
@property (nonatomic, readonly) bool hasCrashReporterKey;
@property (nonatomic) bool hasDatalessItemsCount;
@property (nonatomic) bool hasDiskSpaceLeft;
@property (nonatomic) bool hasDocumentsFoldersWithoutItemIDCount;
@property (nonatomic) bool hasExpectedMigratedItemsCount;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic) bool hasIgnoredContentProtectedItems;
@property (nonatomic) bool hasImportTime;
@property (nonatomic) bool hasIsAccountDataSeparated;
@property (nonatomic) bool hasIsDesktopEnabled;
@property (nonatomic) bool hasItemsChangedDuringCloning;
@property (nonatomic) bool hasItemsNotFoundInDB;
@property (nonatomic) bool hasItemsNotMigratedCount;
@property (nonatomic) bool hasManuallyTriggeredMigration;
@property (nonatomic) bool hasMaterialisedOnCDItemsCount;
@property (nonatomic) bool hasMaterialisedOnFPFSItemsCount;
@property (nonatomic) bool hasPackagesWithoutBundleBit;
@property (nonatomic) bool hasPreviousAttempts;
@property (nonatomic) bool hasPreviousFailedAttempts;
@property (nonatomic) bool hasPreviousReleasesSuccessRate;
@property (nonatomic, readonly) bool hasRampId;
@property (nonatomic) bool hasSymlinkedDocumentsFolderCount;
@property (nonatomic) bool hasTotalItemCount;
@property (nonatomic, readonly) bool hasTreatmentId;
@property (nonatomic) bool hasTypesOfMigratedItemsMask;
@property (nonatomic) bool hasTypesOfNonMigratedItemsMask;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic, readonly) bool hasUnderlyingErrorDescription;
@property (nonatomic, readonly) bool hasUnderlyingErrorDomain;
@property (nonatomic) bool hasUnexpectedCreations;
@property (nonatomic) long long ignoredContentProtectedItems;
@property (nonatomic) double importTime;
@property (nonatomic) bool isAccountDataSeparated;
@property (nonatomic) bool isDesktopEnabled;
@property (nonatomic) long long itemsChangedDuringCloning;
@property (nonatomic) long long itemsNotFoundInDB;
@property (nonatomic) long long itemsNotMigratedCount;
@property (nonatomic) bool manuallyTriggeredMigration;
@property (nonatomic) long long materialisedOnCDItemsCount;
@property (nonatomic) long long materialisedOnFPFSItemsCount;
@property (nonatomic) long long packagesWithoutBundleBit;
@property (nonatomic) long long previousAttempts;
@property (nonatomic) long long previousFailedAttempts;
@property (nonatomic) float previousReleasesSuccessRate;
@property (nonatomic, retain) NSString *rampId;
@property (nonatomic) long long symlinkedDocumentsFolderCount;
@property (nonatomic) long long totalItemCount;
@property (nonatomic, retain) NSString *treatmentId;
@property (nonatomic) int typesOfMigratedItemsMask;
@property (nonatomic) int typesOfNonMigratedItemsMask;
@property (nonatomic) long long underlyingErrorCode;
@property (nonatomic, retain) NSString *underlyingErrorDescription;
@property (nonatomic, retain) NSString *underlyingErrorDomain;
@property (nonatomic) long long unexpectedCreations;

- (void).cxx_destruct;
- (long long)accountQuotaUsage;
- (bool)areMigratedFaultsBelowThreshold;
- (bool)areNonFaultAllMigrated;
- (long long)bouncedDocumentsFoldersCount;
- (long long)bouncedItemsCount;
- (long long)bouncedItemsMatrix;
- (long long)ciconiaVersion;
- (double)cloningTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crashReporterKey;
- (long long)datalessItemsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)diskSpaceLeft;
- (long long)documentsFoldersWithoutItemIDCount;
- (long long)expectedMigratedItemsCount;
- (id)experimentId;
- (bool)hasAccountQuotaUsage;
- (bool)hasAreMigratedFaultsBelowThreshold;
- (bool)hasAreNonFaultAllMigrated;
- (bool)hasBouncedDocumentsFoldersCount;
- (bool)hasBouncedItemsCount;
- (bool)hasBouncedItemsMatrix;
- (bool)hasCiconiaVersion;
- (bool)hasCloningTime;
- (bool)hasCrashReporterKey;
- (bool)hasDatalessItemsCount;
- (bool)hasDiskSpaceLeft;
- (bool)hasDocumentsFoldersWithoutItemIDCount;
- (bool)hasExpectedMigratedItemsCount;
- (bool)hasExperimentId;
- (bool)hasIgnoredContentProtectedItems;
- (bool)hasImportTime;
- (bool)hasIsAccountDataSeparated;
- (bool)hasIsDesktopEnabled;
- (bool)hasItemsChangedDuringCloning;
- (bool)hasItemsNotFoundInDB;
- (bool)hasItemsNotMigratedCount;
- (bool)hasManuallyTriggeredMigration;
- (bool)hasMaterialisedOnCDItemsCount;
- (bool)hasMaterialisedOnFPFSItemsCount;
- (bool)hasPackagesWithoutBundleBit;
- (bool)hasPreviousAttempts;
- (bool)hasPreviousFailedAttempts;
- (bool)hasPreviousReleasesSuccessRate;
- (bool)hasRampId;
- (bool)hasSymlinkedDocumentsFolderCount;
- (bool)hasTotalItemCount;
- (bool)hasTreatmentId;
- (bool)hasTypesOfMigratedItemsMask;
- (bool)hasTypesOfNonMigratedItemsMask;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDescription;
- (bool)hasUnderlyingErrorDomain;
- (bool)hasUnexpectedCreations;
- (unsigned long long)hash;
- (long long)ignoredContentProtectedItems;
- (double)importTime;
- (bool)isAccountDataSeparated;
- (bool)isDesktopEnabled;
- (bool)isEqual:(id)arg1;
- (long long)itemsChangedDuringCloning;
- (long long)itemsNotFoundInDB;
- (long long)itemsNotMigratedCount;
- (bool)manuallyTriggeredMigration;
- (long long)materialisedOnCDItemsCount;
- (long long)materialisedOnFPFSItemsCount;
- (void)mergeFrom:(id)arg1;
- (long long)packagesWithoutBundleBit;
- (long long)previousAttempts;
- (long long)previousFailedAttempts;
- (float)previousReleasesSuccessRate;
- (id)rampId;
- (bool)readFrom:(id)arg1;
- (void)setAccountQuotaUsage:(long long)arg1;
- (void)setAreMigratedFaultsBelowThreshold:(bool)arg1;
- (void)setAreNonFaultAllMigrated:(bool)arg1;
- (void)setBouncedDocumentsFoldersCount:(long long)arg1;
- (void)setBouncedItemsCount:(long long)arg1;
- (void)setBouncedItemsMatrix:(long long)arg1;
- (void)setCiconiaVersion:(long long)arg1;
- (void)setCloningTime:(double)arg1;
- (void)setCrashReporterKey:(id)arg1;
- (void)setDatalessItemsCount:(long long)arg1;
- (void)setDiskSpaceLeft:(long long)arg1;
- (void)setDocumentsFoldersWithoutItemIDCount:(long long)arg1;
- (void)setExpectedMigratedItemsCount:(long long)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setHasAccountQuotaUsage:(bool)arg1;
- (void)setHasAreMigratedFaultsBelowThreshold:(bool)arg1;
- (void)setHasAreNonFaultAllMigrated:(bool)arg1;
- (void)setHasBouncedDocumentsFoldersCount:(bool)arg1;
- (void)setHasBouncedItemsCount:(bool)arg1;
- (void)setHasBouncedItemsMatrix:(bool)arg1;
- (void)setHasCiconiaVersion:(bool)arg1;
- (void)setHasCloningTime:(bool)arg1;
- (void)setHasDatalessItemsCount:(bool)arg1;
- (void)setHasDiskSpaceLeft:(bool)arg1;
- (void)setHasDocumentsFoldersWithoutItemIDCount:(bool)arg1;
- (void)setHasExpectedMigratedItemsCount:(bool)arg1;
- (void)setHasIgnoredContentProtectedItems:(bool)arg1;
- (void)setHasImportTime:(bool)arg1;
- (void)setHasIsAccountDataSeparated:(bool)arg1;
- (void)setHasIsDesktopEnabled:(bool)arg1;
- (void)setHasItemsChangedDuringCloning:(bool)arg1;
- (void)setHasItemsNotFoundInDB:(bool)arg1;
- (void)setHasItemsNotMigratedCount:(bool)arg1;
- (void)setHasManuallyTriggeredMigration:(bool)arg1;
- (void)setHasMaterialisedOnCDItemsCount:(bool)arg1;
- (void)setHasMaterialisedOnFPFSItemsCount:(bool)arg1;
- (void)setHasPackagesWithoutBundleBit:(bool)arg1;
- (void)setHasPreviousAttempts:(bool)arg1;
- (void)setHasPreviousFailedAttempts:(bool)arg1;
- (void)setHasPreviousReleasesSuccessRate:(bool)arg1;
- (void)setHasSymlinkedDocumentsFolderCount:(bool)arg1;
- (void)setHasTotalItemCount:(bool)arg1;
- (void)setHasTypesOfMigratedItemsMask:(bool)arg1;
- (void)setHasTypesOfNonMigratedItemsMask:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setHasUnexpectedCreations:(bool)arg1;
- (void)setIgnoredContentProtectedItems:(long long)arg1;
- (void)setImportTime:(double)arg1;
- (void)setIsAccountDataSeparated:(bool)arg1;
- (void)setIsDesktopEnabled:(bool)arg1;
- (void)setItemsChangedDuringCloning:(long long)arg1;
- (void)setItemsNotFoundInDB:(long long)arg1;
- (void)setItemsNotMigratedCount:(long long)arg1;
- (void)setManuallyTriggeredMigration:(bool)arg1;
- (void)setMaterialisedOnCDItemsCount:(long long)arg1;
- (void)setMaterialisedOnFPFSItemsCount:(long long)arg1;
- (void)setPackagesWithoutBundleBit:(long long)arg1;
- (void)setPreviousAttempts:(long long)arg1;
- (void)setPreviousFailedAttempts:(long long)arg1;
- (void)setPreviousReleasesSuccessRate:(float)arg1;
- (void)setRampId:(id)arg1;
- (void)setSymlinkedDocumentsFolderCount:(long long)arg1;
- (void)setTotalItemCount:(long long)arg1;
- (void)setTreatmentId:(id)arg1;
- (void)setTypesOfMigratedItemsMask:(int)arg1;
- (void)setTypesOfNonMigratedItemsMask:(int)arg1;
- (void)setUnderlyingErrorCode:(long long)arg1;
- (void)setUnderlyingErrorDescription:(id)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (void)setUnexpectedCreations:(long long)arg1;
- (long long)symlinkedDocumentsFolderCount;
- (long long)totalItemCount;
- (id)treatmentId;
- (int)typesOfMigratedItemsMask;
- (int)typesOfNonMigratedItemsMask;
- (long long)underlyingErrorCode;
- (id)underlyingErrorDescription;
- (id)underlyingErrorDomain;
- (long long)unexpectedCreations;
- (void)writeTo:(id)arg1;

@end