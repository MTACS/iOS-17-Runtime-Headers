
@interface _SWCServiceDetails : NSObject <NSSecureCoding, SWCRedactedDescription> {
    struct SWCFields { 
        unsigned int userApproval : 2; 
        unsigned int siteOrFrameworkApproval : 2; 
        unsigned int updating : 1; 
        unsigned int systemApplication : 1; 
        unsigned int enabledConfiguration : 2; 
        unsigned int enterpriseManaged : 1; 
        unsigned int systemPlaceholder : 1; 
        unsigned int provenance : 3; 
        BOOL relativeOrder; 
    }  _fields;
    _SWCServiceSpecifier * _serviceSpecifier;
}

@property (getter=isAlwaysEnabled, readonly) bool alwaysEnabled;
@property (getter=isApproved, readonly) bool approved;
@property (getter=isEnabledByDefault, readonly) NSNumber *enabledByDefault;
@property (getter=isEnterpriseManaged, readonly) bool enterpriseManaged;
@property (readonly) unsigned char frameworkApprovalState;
@property (readonly) BOOL modeOfOperation;
@property (getter=wasProvidedByAdditionalServiceDetailsProvider, readonly) bool providedByAdditionalServiceDetailsProvider;
@property (getter=wasReadFromDisk, readonly) bool readFromDisk;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier;
@property (readonly) unsigned char siteApprovalState;
@property (getter=isSystemApplication, readonly) bool systemApplication;
@property (getter=isSystemPlaceholder, readonly) bool systemPlaceholder;
@property (getter=isUpdating, readonly) bool updating;
@property (nonatomic) unsigned char userApprovalState;
@property (getter=isWatchKitExtension, readonly) bool watchKitExtension;

+ (id)_serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 callerAuditToken:(const struct { unsigned int x1[8]; }*)arg4 error:(id*)arg5;
+ (bool)auditTokenHasReadAccess:(struct { unsigned int x1[8]; })arg1;
+ (bool)auditTokenHasWriteAccess:(struct { unsigned int x1[8]; })arg1;
+ (bool)currentProcessHasReadAccess;
+ (bool)currentProcessHasWriteAccess;
+ (bool)isDeveloperModeEnabled;
+ (id)new;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 auditToken:(struct { unsigned int x1[8]; })arg4 error:(id*)arg5;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 error:(id*)arg2;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 auditToken:(struct { unsigned int x1[8]; })arg3 error:(id*)arg4;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
+ (void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)arg1 usingContentsOfDictionary:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)setDeveloperModeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (void)synchronizeWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_initWithServiceSpecifier:(id)arg1 fields:(const struct SWCFields { unsigned int x1 : 2; unsigned int x2 : 2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 2; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 3; BOOL x9; }*)arg2;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)frameworkApprovalState;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAlwaysEnabled;
- (bool)isApproved;
- (id)isEnabledByDefault;
- (bool)isEnterpriseManaged;
- (bool)isEqual:(id)arg1;
- (bool)isSystemApplication;
- (bool)isSystemPlaceholder;
- (bool)isUpdating;
- (bool)isWatchKitExtension;
- (BOOL)modeOfOperation;
- (id)redactedDescription;
- (id)serviceSpecifier;
- (void)setUserApprovalState:(unsigned char)arg1;
- (bool)setUserApprovalState:(unsigned char)arg1 error:(id*)arg2;
- (unsigned char)siteApprovalState;
- (unsigned char)userApprovalState;
- (void)waitForSiteApprovalWithCompletionHandler:(id /* block */)arg1;
- (bool)wasProvidedByAdditionalServiceDetailsProvider;
- (bool)wasReadFromDisk;

@end
