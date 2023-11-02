
@interface MSDDemoManifestCheck : NSObject {
    NSSet * _allowedISTSignedComponents;
    NSMutableDictionary * _allowedSymLinks;
    NSString * _checkType;
    NSDictionary * _itemBeingInstalled;
    unsigned int  _manifestVersion;
    NSDictionary * _segmentedManifestWithRigorousFlag;
    NSSet * _settingsComponentNames;
    WhitelistChecker * _whitelistChecker;
}

@property (retain) NSSet *allowedISTSignedComponents;
@property (retain) NSMutableDictionary *allowedSymLinks;
@property (retain) NSString *checkType;
@property (retain) NSDictionary *itemBeingInstalled;
@property unsigned int manifestVersion;
@property (retain) NSDictionary *segmentedManifestWithRigorousFlag;
@property (retain) NSSet *settingsComponentNames;
@property (retain) WhitelistChecker *whitelistChecker;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allowedISTSignedComponents;
- (id)allowedSymLinks;
- (bool)checkFileForEntitlements:(id)arg1 forCorrespondingManifestEntry:(id)arg2;
- (id)checkType;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createPublicKey:(id)arg1 usingPolicy:(struct __SecPolicy { }*)arg2 anchors:(id)arg3;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createPublicKeyAppleISTSigning:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createPublicKeyForDevelopmentSigning:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createPublicKeyForDevelopmentSigningStandard:(id)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createPublicKeyForStrongSigning:(id)arg1;
- (id)getAllowedISTSignedComponents:(id)arg1;
- (id)getAllowedISTSignedComponentsFromManifest:(id)arg1;
- (id)getAllowedSymLinks;
- (id)getBackupItemName:(id)arg1;
- (id)getBackupSectionName;
- (id)getComponentData:(id)arg1;
- (id)getInstallationOrder;
- (id)getManifestData:(id)arg1;
- (id)getSecurityCheckSectionNames;
- (id)getSettingsComponentNames;
- (id)getappIconLayoutBackupName;
- (id)init;
- (id)initWithWhiteListChecker:(id)arg1 andCheckType:(id)arg2;
- (bool)isManualSigning:(id)arg1;
- (bool)isValidDataContainerFile:(id)arg1;
- (id)itemBeingInstalled;
- (unsigned int)manifestVersion;
- (void)registerEntitlementNotificationHandler;
- (bool)runAppLayoutSecurityCheck:(id)arg1;
- (bool)runFileSecurityChecksForSection:(id)arg1 dataType:(id)arg2;
- (bool)runSecurityCheck;
- (bool)runSecurityChecksForSection:(id)arg1 dataType:(id)arg2 componentName:(id)arg3;
- (bool)runSettingsSecurityCheckForSection:(id)arg1 component:(id)arg2;
- (bool)secureManifestCheckForSegmentedManifest:(id)arg1;
- (id)segmentedManifestWithRigorousFlag;
- (void)setAllowedISTSignedComponents:(id)arg1;
- (void)setAllowedSymLinks:(id)arg1;
- (void)setCheckType:(id)arg1;
- (void)setItemBeingInstalled:(id)arg1;
- (void)setManifestVersion:(unsigned int)arg1;
- (void)setSegmentedManifestWithRigorousFlag:(id)arg1;
- (void)setSettingsComponentNames:(id)arg1;
- (void)setWhitelistChecker:(id)arg1;
- (id)settingsComponentNames;
- (bool)validateISTSignedApp:(id)arg1 manifest:(id)arg2;
- (id)verifyManifestSignature:(id)arg1 forDataSectionKeys:(id)arg2 withRigorousTestingOverride:(id)arg3;
- (bool)verifySignature:(id)arg1 forData:(id)arg2 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg3;
- (id)whitelistChecker;

@end
