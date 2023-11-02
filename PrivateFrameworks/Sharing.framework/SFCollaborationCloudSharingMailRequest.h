
@interface SFCollaborationCloudSharingMailRequest : NSObject <NSSecureCoding> {
    NSNumber * _accessType;
    NSNumber * _allowOthersToInvite;
    NSData * _appIconData;
    NSString * _appName;
    NSUUID * _collaborationItemIdentifier;
    NSURL * _fileOrFolderURL;
    NSNumber * _permissionType;
    CKContainerSetupInfo * _setupInfo;
    CKShare * _share;
    NSURL * _sharingURL;
}

@property (nonatomic, readonly) NSNumber *accessType;
@property (nonatomic, readonly) NSNumber *allowOthersToInvite;
@property (nonatomic, readonly) NSData *appIconData;
@property (nonatomic, readonly, copy) NSString *appName;
@property (nonatomic, readonly, copy) NSUUID *collaborationItemIdentifier;
@property (nonatomic, readonly) NSURL *fileOrFolderURL;
@property (nonatomic, readonly) NSNumber *permissionType;
@property (nonatomic, readonly) CKContainerSetupInfo *setupInfo;
@property (nonatomic, readonly) CKShare *share;
@property (nonatomic, readonly) NSURL *sharingURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessType;
- (id)allowOthersToInvite;
- (id)appIconData;
- (id)appName;
- (id)collaborationItemIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)fileOrFolderURL;
- (id)initWithCloudSharingRequest:(id)arg1 result:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationItemIdentifier:(id)arg1 fileOrFolderURL:(id)arg2 share:(id)arg3 setupInfo:(id)arg4 sharingURL:(id)arg5 accessType:(id)arg6 permissionType:(id)arg7 allowOthersToInvite:(id)arg8 appName:(id)arg9 appIconData:(id)arg10;
- (id)permissionType;
- (id)setupInfo;
- (id)share;
- (id)sharingURL;

@end
