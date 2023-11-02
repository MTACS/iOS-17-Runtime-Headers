
@interface SFCollaborationCloudSharingRequest : NSObject <NSSecureCoding> {
    NSNumber * _accessType;
    NSString * _activityType;
    NSNumber * _allowOthersToInvite;
    NSData * _appIconData;
    NSString * _appName;
    NSUUID * _collaborationItemIdentifier;
    NSArray * _emailAddresses;
    NSURL * _fileOrFolderURL;
    NSArray * _options;
    NSNumber * _permissionType;
    NSArray * _phoneNumbers;
    CKContainerSetupInfo * _setupInfo;
    CKShare * _share;
}

@property (nonatomic, readonly) NSNumber *accessType;
@property (nonatomic, readonly, copy) NSString *activityType;
@property (nonatomic, readonly) NSNumber *allowOthersToInvite;
@property (nonatomic, readonly) NSData *appIconData;
@property (nonatomic, readonly, copy) NSString *appName;
@property (nonatomic, readonly, copy) NSUUID *collaborationItemIdentifier;
@property (nonatomic, readonly) NSArray *emailAddresses;
@property (nonatomic, readonly) NSURL *fileOrFolderURL;
@property (nonatomic, readonly, copy) NSArray *options;
@property (nonatomic, readonly) NSNumber *permissionType;
@property (nonatomic, readonly) NSArray *phoneNumbers;
@property (nonatomic, readonly) CKContainerSetupInfo *setupInfo;
@property (nonatomic, readonly) CKShare *share;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessType;
- (id)activityType;
- (id)allowOthersToInvite;
- (id)appIconData;
- (id)appName;
- (id)collaborationItemIdentifier;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)fileOrFolderURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationItemIdentifier:(id)arg1 options:(id)arg2 fileOrFolderURL:(id)arg3 share:(id)arg4 setupInfo:(id)arg5 activityType:(id)arg6;
- (id)initWithCollaborationItemIdentifier:(id)arg1 options:(id)arg2 fileOrFolderURL:(id)arg3 share:(id)arg4 setupInfo:(id)arg5 phoneNumbers:(id)arg6 emailAddresses:(id)arg7 activityType:(id)arg8 appName:(id)arg9 appIconData:(id)arg10;
- (id)options;
- (id)permissionType;
- (id)phoneNumbers;
- (id)setupInfo;
- (id)share;

@end
