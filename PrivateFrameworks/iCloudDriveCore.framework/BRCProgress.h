
@interface BRCProgress : NSProgress {
    BOOL  _group;
    bool  _ignorePublish;
    NSArray * _parentFileIDs;
    NSMutableDictionary * _progressByAliasContainerID;
    bool  _published;
    BRCAccountSession * _session;
}

@property (nonatomic, readonly) bool isPublished;
@property (nonatomic, readonly) NSArray *parentFileIDs;

+ (id)_progressForDocument:(id)arg1 group:(BOOL)arg2 sizeInfo:(id)arg3;
+ (id)downloadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;
+ (id)uploadProgressForDocument:(id)arg1 sizeInfo:(id)arg2;

- (void).cxx_destruct;
- (void)_setupProgressForDocument:(id)arg1 group:(BOOL)arg2 sizeInfo:(id)arg3;
- (void)_updateToBeProgressForDocument:(id)arg1 group:(BOOL)arg2 sizeinfo:(id)arg3;
- (void)addAliasItem:(id)arg1;
- (void)brc_publish;
- (void)brc_unpublish;
- (id)initWithGroup:(BOOL)arg1 parentFileIDs:(id)arg2 session:(id)arg3;
- (id)initWithIgnorePublish:(bool)arg1;
- (bool)isPublished;
- (id)parentFileIDs;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setSession:(id)arg1 parentFileIDs:(id)arg2 group:(BOOL)arg3;

@end
