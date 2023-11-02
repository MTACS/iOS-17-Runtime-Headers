
@interface LSBundleRecordUpdater : LSRecordBuilder {
    struct LSBundleData { 
        struct LSBundleBaseData { 
            unsigned int bookmark; 
            unsigned int container; 
            unsigned int execPath; 
            unsigned int exactIdentifier; 
            unsigned int teamID; 
            unsigned int platform; 
            int registrationTime; 
            struct LSVersionNumber { 
                unsigned char _opaque[32]; 
            } version; 
            struct LSVersionNumber { 
                unsigned char _opaque[32]; 
            } execSDKVersion; 
            unsigned int machOUUIDs; 
            unsigned int dataContainerAlias; 
            unsigned int bundleName; 
            unsigned int localizedShortDisplayName; 
            unsigned int displayName; 
            unsigned int localizedDisplayName; 
            unsigned int localizedMicrophoneUsageDescription; 
            unsigned int localizedIdentityUsageDescription; 
            unsigned int codeInfoIdentifier; 
            unsigned int signerOrganization; 
            unsigned int signerIdentity; 
            unsigned int infoDictionary; 
            unsigned int entitlements; 
            unsigned int groupContainers; 
            unsigned char containingDirectoryClass; 
            unsigned char profileValidationState; 
            unsigned int intentDefinitionURLs; 
            unsigned short _sliceMask; 
            unsigned int signatureVersion; 
            struct LSBundleBaseFlags { 
                unsigned int appleInternal : 1; 
                unsigned int requiresObjCGarbageCollection : 1; 
                unsigned int builtWithTSan : 1; 
                unsigned int isLinkEnabled : 1; 
                unsigned int _reserved : 1; 
            } flags; 
        } base; 
        unsigned int _clas; 
        unsigned long long _bundleFlags; 
        unsigned int _plistContentFlags; 
        unsigned int _itemFlags; 
        unsigned char _iconFlags; 
        struct LSBundleMoreFlags { 
            unsigned int isWebBrowser : 1; 
            unsigned int isMailClient : 1; 
            unsigned int supportsControllerUserInteraction : 1; 
            unsigned int supportsSpotlightQueryContinuation : 1; 
            unsigned int supportsSpotlightActions : 1; 
            unsigned int isCodeSigningInfoNotAuthoritative : 1; 
            unsigned int applicationQueriesSchemesTooBig : 1; 
            unsigned int isUpdateAvailable : 1; 
            unsigned int isPlaygroundsApp : 1; 
            unsigned int supportsAlwaysOnDisplay : 1; 
            unsigned int defaultsToPrivateAlwaysOnDisplayTreatment : 1; 
            unsigned int supportsLiveActivities : 1; 
            unsigned int supportsLiveActivitiesFrequentUpdates : 1; 
            unsigned int requiresPostprocessing : 1; 
            unsigned int hasShellRole : 1; 
            unsigned int isSecuredSystemContent : 1; 
            unsigned int requiresSecureLaunch : 1; 
            unsigned int _reserved : 1; 
        } moreFlags; 
        unsigned int _hfsType; 
        int _mtime; 
        unsigned int minSystemVersionPlatform; 
        struct LSVersionNumber { 
            unsigned char _opaque[32]; 
        } _minSystemVersion; 
        struct LSVersionNumber { 
            unsigned char _opaque[32]; 
        } _maxSystemVersion; 
        unsigned int appStoreToolsBuildVersion; 
        unsigned long long sequenceNumber; 
        unsigned long long compatibilityState; 
        unsigned long long itemID; 
        unsigned int deviceFamilies; 
        unsigned int identifier; 
        unsigned int counterpartIdentifiers; 
        unsigned int equivalentBundleIdentifiers; 
        unsigned int categoryType; 
        unsigned int secondaryCategoryType; 
        unsigned int filename; 
        unsigned int bundleVersion; 
        unsigned int shortVersionString; 
        unsigned int installType; 
        unsigned long long installFailureReason; 
        unsigned int vendorName; 
        unsigned int appType; 
        unsigned long long staticDiskUsage; 
        unsigned long long purchaserDSID; 
        unsigned long long downloaderDSID; 
        unsigned long long familyID; 
        unsigned int itemName; 
        unsigned long long storefront; 
        unsigned long long versionIdentifier; 
        unsigned int sourceAppBundleID; 
        unsigned int appVariant; 
        unsigned long long ratingRank; 
        unsigned int ratingLabel; 
        unsigned long long genreID; 
        unsigned int genre; 
        unsigned int primaryIconName; 
        unsigned int alternatePrimaryIconName; 
        unsigned int iconsDict; 
        unsigned int iconFileNames; 
        unsigned int libraryPath; 
        unsigned int libraryItems; 
        unsigned int claims; 
        unsigned int types; 
        unsigned int plugins; 
        unsigned int driverExtensions; 
        unsigned int extensionPoints; 
        unsigned int activityTypes; 
        unsigned int queriableSchemes; 
        unsigned int bgPermittedIDs; 
        unsigned int carPlayInstrumentClusterURLSchemes; 
        unsigned int appContainerAlias; 
        unsigned char revision; 
        unsigned char retries; 
        unsigned char _reserved4; 
        unsigned int sandboxEnvironmentVariables; 
        unsigned int localizedNameWithContext[1]; 
        unsigned int bundlePersonas; 
        unsigned int bundlePersonaTypes; 
        struct LSAppClipFields { 
            unsigned int parentAppIDs; 
        } appClipFields; 
        int recordModificationTime; 
        unsigned int supportedGameControllers; 
        unsigned int mobileInstallIDs; 
        unsigned int applicationManagementDomain; 
        unsigned int stashedAppDict; 
        unsigned int linkedParentBundleIdentifier; 
        unsigned int _reserved5; 
    }  _bundleData;
    unsigned int  _bundleID;
    struct LSContext { 
        _LSDatabase *db; 
    }  _context;
    bool  _hasContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)checkNeedsUpdateForiTunesMetadata:(id)arg1 SINFo:(id)arg2 placeholderMetadata:(id)arg3;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(bool)arg2;
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 bundleData:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg3;
- (bool)parsePersonas:(id)arg1 error:(id*)arg2;
- (void)parsePlaceholderMetadata:(id)arg1;
- (void)parseSINFDictionary:(id)arg1;
- (void)parseiTunesMetadata:(id)arg1;
- (bool)updateBundleRecord:(id*)arg1;

@end
