
@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob {
    NSArray * _MSASSharingRelationships;
    NSString * _albumGUID;
    long long  _jobType;
    NSDictionary * _mstreamdInfoDictionary;
    long long  _relationshipChangeType;
    NSString * _resendInvitationGUID;
}

@property (nonatomic, retain) NSArray *MSASSharingRelationships;
@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic) long long jobType;
@property (nonatomic, retain) NSDictionary *mstreamdInfoDictionary;
@property (nonatomic) long long relationshipChangeType;
@property (nonatomic, retain) NSString *resendInvitationGUID;

+ (void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2;
+ (void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1;

- (void).cxx_destruct;
- (id)MSASSharingRelationships;
- (id)albumGUID;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (long long)jobType;
- (id)mstreamdInfoDictionary;
- (long long)relationshipChangeType;
- (id)resendInvitationGUID;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumGUID:(id)arg1;
- (void)setJobType:(long long)arg1;
- (void)setMSASSharingRelationships:(id)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;
- (void)setRelationshipChangeType:(long long)arg1;
- (void)setResendInvitationGUID:(id)arg1;
- (bool)shouldArchiveXPCToDisk;

@end
