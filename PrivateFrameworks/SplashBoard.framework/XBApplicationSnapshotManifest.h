
@interface XBApplicationSnapshotManifest : NSObject <BSDescriptionProviding, XBApplicationSnapshotManifestDelegate> {
    <XBApplicationSnapshotManifestDelegate> * _delegate;
    XBApplicationSnapshotManifestImpl * _manifestImpl;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *containerPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *defaultGroupIdentifier;
@property (nonatomic) <XBApplicationSnapshotManifestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) XBApplicationSnapshotManifestImpl *manifestImpl;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard

+ (id)_manifestsByIdentity;
+ (id)debugDescription;
+ (void)deleteAllSystemSnapshots;
+ (void)handleTrackingStateChange;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_allSnapshotGroups;
- (bool)_invalidate;
- (void)archive;
- (void)beginSnapshotAccessTransaction:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)beginTrackingImageDeletions;
- (id)bundleIdentifier;
- (id)containerPath;
- (id)createSnapshotWithGroupID:(id)arg1;
- (id)createVariantForSnapshot:(id)arg1 withIdentifier:(id)arg2;
- (void)dealloc;
- (id)defaultGroupIdentifier;
- (id)delegate;
- (void)deleteAllSnapshots;
- (void)deleteSnapshot:(id)arg1;
- (void)deleteSnapshots:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1;
- (void)deleteSnapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (void)deleteSnapshotsForGroupID:(id)arg1 predicateBuilder:(id /* block */)arg2;
- (void)deleteSnapshotsMatchingPredicate:(id)arg1;
- (void)deleteSnapshotsUsingPredicateBuilder:(id /* block */)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)endTrackingImageDeletions;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 options:(unsigned long long)arg3 imageGeneratedHandler:(id /* block */)arg4 imageDataSavedHandler:(id /* block */)arg5;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(bool)arg3 completion:(id /* block */)arg4;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(bool)arg3 didGenerateImage:(id /* block */)arg4 didSaveImage:(id /* block */)arg5;
- (void)generateImageForSnapshot:(id)arg1 dataProvider:(id)arg2 writeToFile:(bool)arg3 imageGeneratedHandler:(id /* block */)arg4 imageDataSavedHandler:(id /* block */)arg5;
- (id)initWithApplicationInfo:(id)arg1;
- (id)initWithContainerIdentity:(id)arg1 store:(id)arg2;
- (void)manifest:(id)arg1 didPurgeProtectedContentSnapshotsWithGroupIdentifiers:(id)arg2;
- (id)manifestImpl;
- (void)purgeSnapshotsWithProtectedContent;
- (void)saveSnapshot:(id)arg1 atPath:(id)arg2 withContext:(id)arg3;
- (void)setDelegate:(id)arg1;
- (bool)snapshotsConsideredUnpurgableByAPFS;
- (id)snapshotsForGroupID:(id)arg1;
- (id)snapshotsForGroupID:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupID:(id)arg1 matchingPredicate:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1;
- (id)snapshotsForGroupIDs:(id)arg1 fetchRequest:(id)arg2;
- (id)snapshotsForGroupIDs:(id)arg1 matchingPredicate:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateSnapshotsAPFSPurgability:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)createSnapshotForSceneSnapshot:(id)arg1 withName:(id)arg2;

@end
