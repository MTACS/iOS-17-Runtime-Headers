
@interface LSBundleRecord : LSRecord <PABundleRecord> {
    NSArray * __personasWithAttributes;
    struct { unsigned int x1[8]; } * _auditToken;
    NSString * _bundleIdentifier;
    id  _cachedDataContainerURL;
    FSNode * _node;
}

@property (readonly) NSString *SDKVersion;
@property (readonly) NSArray *UIBackgroundModes;
@property (getter=isUPPValidated, readonly) bool UPPValidated;
@property (readonly) NSURL *URL;
@property (readonly) NSArray *WKBackgroundModes;
@property (nonatomic, readonly) const struct { unsigned int x1[8]; }*_auditToken;
@property (readonly) struct LSBundleBaseFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; } _baseFlags;
@property (nonatomic, readonly) struct LSVersionNumber { unsigned char x1[32]; } _bundleVersion;
@property (readonly) unsigned long long _containerClass;
@property (readonly) bool _containerized;
@property (readonly) NSURL *_dataContainerURLFromDatabase;
@property (readonly) NSString *_fallbackLocalizedName;
@property (readonly) _LSLocalizedStringRecord *_localizedIdentityUsageDescription;
@property (readonly) _LSLocalizedStringRecord *_localizedMicrophoneUsageDescription;
@property (readonly) _LSLocalizedStringRecord *_localizedName;
@property (readonly) _LSLocalizedStringRecord *_localizedShortName;
@property (nonatomic, readonly) FSNode *_node;
@property (readonly) NSArray *_personasWithAttributes;
@property (readonly) unsigned char _profileValidationState;
@property (readonly) _LSLazyPropertyList *_rawGroupContainerURLs;
@property (nonatomic, readonly) LSBundleRecord *_realRecord;
@property (readonly) bool _usesSystemPersona;
@property (readonly) NSString *accentColorName;
@property (readonly) NSString *applicationIdentifier;
@property (readonly) NSArray *associatedPersonas;
@property (getter=wasBuiltWithThreadSanitizer, readonly) bool builtWithThreadSanitizer;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSSet *claimRecords;
@property (readonly) unsigned int codeSignatureVersion;
@property (nonatomic, readonly) LSBundleProxy *compatibilityObject;
@property (readonly) unsigned long long compatibilityState;
@property (nonatomic, readonly) LSApplicationRecord *containingApplicationRecord;
@property (readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL developerType;
@property (readonly) BOOL developerType;
@property (readonly) LSPropertyList *entitlements;
@property (readonly) NSURL *executableURL;
@property (readonly) NSSet *exportedTypeRecords;
@property (getter=isFreeProfileValidated, readonly) bool freeProfileValidated;
@property (readonly) NSDictionary *groupContainerURLs;
@property (readonly) unsigned long long hash;
@property (readonly) LSApplicationRecord *if_containingAppRecord;
@property (readonly) NSSet *importedTypeRecords;
@property (readonly) LSPropertyList *infoDictionary;
@property (readonly) NSDictionary *intentDefinitionURLs;
@property (readonly) NSArray *intentsRestrictedWhileLocked;
@property (readonly) NSArray *intentsRestrictedWhileProtectedDataUnavailable;
@property (readonly) bool isAppleInternal;
@property (readonly) bool isLinkEnabled;
@property (nonatomic, readonly) bool ln_isAppIntentsEnabled;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (readonly) NSArray *machOUUIDs;
@property (readonly) NSArray *managedPersonas;
@property (readonly) unsigned int platform;
@property (readonly) NSArray *privacyTrackingDomains;
@property (getter=isProfileValidated, readonly) bool profileValidated;
@property (readonly) NSDate *registrationDate;
@property (readonly) NSSet *serviceRecords;
@property (readonly) NSString *signerIdentity;
@property (readonly) NSString *signerOrganization;
@property (nonatomic, readonly) bool sr_isSocialNetworking;
@property (nonatomic, readonly) bool sr_supportsDataGeneration;
@property (nonatomic, readonly) bool sr_supportsMessagingIntents;
@property (nonatomic, readonly) bool sr_supportsVOIP;
@property (readonly) Class superclass;
@property (readonly) NSArray *supportedIntentMediaCategories;
@property (readonly) NSArray *supportedIntents;
@property (readonly) bool supportsNowPlaying;
@property (nonatomic, readonly) bool swift_isAppIntentsEnabled;
@property (readonly) NSString *teamIdentifier;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_bundleRecordForAuditToken:(struct { unsigned int x1[8]; })arg1 checkNSBundleMainBundle:(unsigned char)arg2 error:(id*)arg3;
+ (id)_propertyClasses;
+ (id)bundleRecordForAuditToken:(struct { unsigned int x1[8]; })arg1 error:(id*)arg2;
+ (id)bundleRecordForCurrentProcess;
+ (id)bundleRecordWithApplicationIdentifier:(id)arg1 error:(id*)arg2;
+ (id)bundleRecordWithBundleIdentifier:(id)arg1 allowPlaceholder:(bool)arg2 error:(id*)arg3;
+ (id)coreTypesBundleRecord;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SDKVersion;
- (id)SDKVersionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)UIBackgroundModes;
- (id)URL;
- (id)WKBackgroundModes;
- (void)_LSRecord_resolve_SDKVersion;
- (void)_LSRecord_resolve__baseFlags;
- (void)_LSRecord_resolve__bundleVersion;
- (void)_LSRecord_resolve__dataContainerURLFromDatabase;
- (void)_LSRecord_resolve__localizedIdentityUsageDescription;
- (void)_LSRecord_resolve__localizedMicrophoneUsageDescription;
- (void)_LSRecord_resolve__localizedName;
- (void)_LSRecord_resolve__localizedShortName;
- (void)_LSRecord_resolve__profileValidationState;
- (void)_LSRecord_resolve__rawGroupContainerURLs;
- (void)_LSRecord_resolve_claimRecords;
- (void)_LSRecord_resolve_codeSignatureVersion;
- (void)_LSRecord_resolve_developerType;
- (void)_LSRecord_resolve_entitlements;
- (void)_LSRecord_resolve_executableURL;
- (void)_LSRecord_resolve_exportedTypeRecords;
- (void)_LSRecord_resolve_importedTypeRecords;
- (void)_LSRecord_resolve_infoDictionary;
- (void)_LSRecord_resolve_intentDefinitionURLs;
- (void)_LSRecord_resolve_isAppleInternal;
- (void)_LSRecord_resolve_isLinkEnabled;
- (void)_LSRecord_resolve_machOUUIDs;
- (void)_LSRecord_resolve_platform;
- (void)_LSRecord_resolve_registrationDate;
- (void)_LSRecord_resolve_signerIdentity;
- (void)_LSRecord_resolve_signerOrganization;
- (void)_LSRecord_resolve_teamIdentifier;
- (const struct { unsigned int x1[8]; }*)_auditToken;
- (struct LSBundleBaseFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; })_baseFlags;
- (struct LSBundleBaseFlags { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; })_baseFlagsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (struct LSVersionNumber { unsigned char x1[32]; })_bundleVersion;
- (struct LSVersionNumber { unsigned char x1[32]; })_bundleVersionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_cachedDataContainerURL;
- (unsigned long long)_containerClass;
- (bool)_containerized;
- (id)_dataContainerURLFromDatabase;
- (id)_dataContainerURLFromDatabaseWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (void)_detachFromContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void*)arg4;
- (id)_fallbackLocalizedName;
- (id)_getGroupContainersCreatingIfNecessary:(bool)arg1 checkNonContainerizedBundles:(bool)arg2;
- (id)_initWithContext:(struct LSContext { id x1; }*)arg1 persistentIdentifierData:(const struct LSPersistentIdentifierData { unsigned char x1; unsigned char x2[3]; unsigned int x3; unsigned int x4; unsigned char x5[16]; BOOL x6[0]; }*)arg2 length:(unsigned long long)arg3;
- (id)_initWithNode:(id)arg1 bundleIdentifier:(id)arg2 context:(struct LSContext { id x1; }*)arg3 tableID:(unsigned int)arg4 unitID:(unsigned int)arg5 bundleBaseData:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg6 error:(id*)arg7;
- (id)_localizedIdentityUsageDescription;
- (id)_localizedIdentityUsageDescriptionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_localizedMicrophoneUsageDescription;
- (id)_localizedMicrophoneUsageDescriptionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_localizedName;
- (id)_localizedNameWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_localizedShort:(bool)arg1 nameWithContext:(struct LSContext { id x1; }*)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 bundleData:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg5;
- (id)_localizedShortName;
- (id)_localizedShortNameWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_node;
- (id)_personasWithAttributes;
- (id)_personasWithAttributes;
- (unsigned char)_profileValidationState;
- (unsigned char)_profileValidationStateWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_rawGroupContainerURLs;
- (id)_rawGroupContainerURLsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)_realRecord;
- (bool)_usesSystemPersona;
- (id)accentColorName;
- (id)applicationIdentifier;
- (id)associatedPersonas;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)claimRecords;
- (id)claimRecordsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg4;
- (unsigned int)codeSignatureVersion;
- (unsigned int)codeSignatureVersionWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (unsigned long long)compatibilityState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataContainerURL;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)developerType;
- (BOOL)developerTypeWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlements;
- (id)entitlementsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)executableURL;
- (id)executableURLWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)exported:(bool)arg1 typesWithContext:(struct LSContext { id x1; }*)arg2 tableID:(unsigned int)arg3 unitID:(unsigned int)arg4 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg5;
- (id)exportedTypeRecords;
- (id)exportedTypeRecordsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg4;
- (bool)getDataContainerURL:(id*)arg1 error:(id*)arg2;
- (id)getGroupContainersCreatingIfNecessary:(bool)arg1;
- (id)groupContainerIdentifiers;
- (id)groupContainerURLs;
- (unsigned long long)hash;
- (id)importedTypeRecords;
- (id)importedTypeRecordsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg4;
- (id)infoDictionary;
- (id)infoDictionaryWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)intentDefinitionURLs;
- (id)intentDefinitionURLsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)intentsRestrictedWhileLocked;
- (id)intentsRestrictedWhileProtectedDataUnavailable;
- (bool)isAppleInternal;
- (bool)isAppleInternalWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFreeProfileValidated;
- (bool)isLinkEnabled;
- (bool)isLinkEnabledWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleData { struct LSBundleBaseData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; int x_1_1_7; struct LSVersionNumber { unsigned char x_8_2_1[32]; } x_1_1_8; struct LSVersionNumber { unsigned char x_9_2_1[32]; } x_1_1_9; unsigned int x_1_1_10; unsigned int x_1_1_11; unsigned int x_1_1_12; unsigned int x_1_1_13; unsigned int x_1_1_14; unsigned int x_1_1_15; unsigned int x_1_1_16; unsigned int x_1_1_17; unsigned int x_1_1_18; unsigned int x_1_1_19; unsigned int x_1_1_20; unsigned int x_1_1_21; unsigned int x_1_1_22; unsigned int x_1_1_23; unsigned char x_1_1_24; unsigned char x_1_1_25; unsigned int x_1_1_26; unsigned short x_1_1_27; unsigned int x_1_1_28; struct LSBundleBaseFlags { unsigned int x_29_2_1 : 1; unsigned int x_29_2_2 : 1; unsigned int x_29_2_3 : 1; unsigned int x_29_2_4 : 1; unsigned int x_29_2_5 : 1; } x_1_1_29; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned char x6; struct LSBundleMoreFlags { unsigned int x_7_1_1 : 1; unsigned int x_7_1_2 : 1; unsigned int x_7_1_3 : 1; unsigned int x_7_1_4 : 1; unsigned int x_7_1_5 : 1; unsigned int x_7_1_6 : 1; unsigned int x_7_1_7 : 1; unsigned int x_7_1_8 : 1; unsigned int x_7_1_9 : 1; unsigned int x_7_1_10 : 1; unsigned int x_7_1_11 : 1; unsigned int x_7_1_12 : 1; unsigned int x_7_1_13 : 1; unsigned int x_7_1_14 : 1; unsigned int x_7_1_15 : 1; unsigned int x_7_1_16 : 1; unsigned int x_7_1_17 : 1; unsigned int x_7_1_18 : 1; } x7; }*)arg4;
- (bool)isProfileValidated;
- (bool)isUPPValidated;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1;
- (id)localizedShortName;
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;
- (id)machOUUIDs;
- (id)machOUUIDsWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)managedPersonas;
- (bool)personaIsApplicable:(id)arg1;
- (unsigned int)platform;
- (unsigned int)platformWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)privacyTrackingDomains;
- (id)registrationDate;
- (id)registrationDateWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)serviceRecords;
- (id)signerIdentity;
- (id)signerIdentityWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)signerOrganization;
- (id)signerOrganizationWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (id)supportedIntentMediaCategories;
- (id)supportedIntents;
- (bool)supportsNowPlaying;
- (id)teamIdentifier;
- (id)teamIdentifierWithContext:(struct LSContext { id x1; }*)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LSBundleBaseData { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; struct LSVersionNumber { unsigned char x_8_1_1[32]; } x8; struct LSVersionNumber { unsigned char x_9_1_1[32]; } x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned char x24; unsigned char x25; unsigned int x26; unsigned short x27; unsigned int x28; struct LSBundleBaseFlags { unsigned int x_29_1_1 : 1; unsigned int x_29_1_2 : 1; unsigned int x_29_1_3 : 1; unsigned int x_29_1_4 : 1; unsigned int x_29_1_5 : 1; } x29; }*)arg4;
- (bool)wasBuiltWithThreadSanitizer;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)cls_appExtensionContainerBundleRecordForConnection:(id)arg1;
+ (id)cls_appExtensionContainerBundleRecordForCurrentTask;
+ (id)cls_appExtensionContainerBundleRecordWithProperties:(id)arg1;

// Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI

- (id)fpui_containingApplicationRecord;

// Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

+ (id)doc_applicationExtensionRecordAtURL:(id)arg1;

- (id)containingApplicationRecord;

// Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices

- (bool)_IS_allows1016Sufix;
- (id)_IS_iconDictionaryForTag:(id)arg1 tagClass:(id)arg2;
- (id)_IS_iconDictionaryForType:(id)arg1;
- (id)_IS_iconProvidingLineageForRecord:(id)arg1;
- (unsigned long long)_IS_platformToIFPlatform;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)if_allIntentDefinitionURLs;
- (id)if_containingAppRecord;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

- (bool)ln_isAppIntentsEnabled;
- (bool)swift_isAppIntentsEnabled;

// Image: /System/Library/PrivateFrameworks/SensorKitHelper.framework/SensorKitHelper

+ (id)sr_bundleRecordWithIdentifier:(id)arg1 error:(id*)arg2;

- (bool)sr_isSocialNetworking;
- (bool)sr_supportsDataGeneration;
- (bool)sr_supportsMessagingIntents;
- (bool)sr_supportsVOIP;

@end
