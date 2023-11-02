
@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {
    NSArray * _albumCloudGUIDsToDelete;
    NSString * _inviterAddress;
}

@property (nonatomic, retain) NSArray *albumCloudGUIDsToDelete;
@property (nonatomic, retain) NSString *inviterAddress;

+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2;
+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;

- (void).cxx_destruct;
- (id)albumCloudGUIDsToDelete;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)inviterAddress;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumCloudGUIDsToDelete:(id)arg1;
- (void)setInviterAddress:(id)arg1;

@end
