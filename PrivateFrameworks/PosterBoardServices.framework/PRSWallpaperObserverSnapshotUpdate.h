
@interface PRSWallpaperObserverSnapshotUpdate : NSObject <BSXPCSecureCoding> {
    PRSServerPosterPath * _path;
    NSString * _snapshotType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSServerPosterPath *path;
@property (nonatomic, readonly) NSString *snapshotType;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithPath:(id)arg1 snapshotType:(id)arg2;
- (id)path;
- (id)snapshotType;

@end
