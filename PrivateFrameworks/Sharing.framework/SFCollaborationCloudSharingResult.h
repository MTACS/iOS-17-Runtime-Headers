
@interface SFCollaborationCloudSharingResult : NSObject <NSSecureCoding> {
    NSUUID * _collaborationItemIdentifier;
    NSError * _error;
    bool  _existingShare;
    SFCollaborationCloudSharingMailResult * _mailResult;
    CKShare * _share;
    NSURL * _sharingURL;
}

@property (nonatomic, readonly, copy) NSUUID *collaborationItemIdentifier;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool existingShare;
@property (nonatomic, retain) SFCollaborationCloudSharingMailResult *mailResult;
@property (nonatomic, readonly) CKShare *share;
@property (nonatomic, readonly) NSURL *sharingURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationItemIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (bool)existingShare;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationItemIdentifier:(id)arg1 sharingURL:(id)arg2 share:(id)arg3 error:(id)arg4 mailResult:(id)arg5;
- (id)initWithCollaborationItemIdentifier:(id)arg1 sharingURL:(id)arg2 share:(id)arg3 existingShare:(bool)arg4 error:(id)arg5 mailResult:(id)arg6;
- (id)mailResult;
- (void)setMailResult:(id)arg1;
- (id)share;
- (id)sharingURL;

@end
