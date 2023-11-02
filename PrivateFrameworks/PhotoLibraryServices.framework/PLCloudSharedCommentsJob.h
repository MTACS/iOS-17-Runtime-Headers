
@interface PLCloudSharedCommentsJob : PLCloudSharingJob {
    NSString * _albumGUID;
    NSString * _assetGUID;
    NSString * _commentGUID;
    long long  _jobType;
    NSArray * _msASComments;
    NSDictionary * _mstreamdInfoDictionary;
}

@property (nonatomic, retain) NSString *albumGUID;
@property (nonatomic, retain) NSString *assetGUID;
@property (nonatomic, retain) NSString *commentGUID;
@property (nonatomic) long long jobType;
@property (nonatomic, retain) NSArray *msASComments;
@property (nonatomic, retain) NSDictionary *mstreamdInfoDictionary;

+ (void)assetsdLocallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5;
+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;
+ (void)publishCommentToServer:(id)arg1;

- (void).cxx_destruct;
- (id)albumGUID;
- (id)assetGUID;
- (id)commentGUID;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDeleteCommentFromServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (long long)jobType;
- (id)msASComments;
- (id)mstreamdInfoDictionary;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumGUID:(id)arg1;
- (void)setAssetGUID:(id)arg1;
- (void)setCommentGUID:(id)arg1;
- (void)setJobType:(long long)arg1;
- (void)setMsASComments:(id)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;
- (bool)shouldArchiveXPCToDisk;

@end
