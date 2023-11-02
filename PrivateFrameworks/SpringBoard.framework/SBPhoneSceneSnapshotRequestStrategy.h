
@interface SBPhoneSceneSnapshotRequestStrategy : NSObject <SBSceneSnapshotRequestStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)snapshotRequestsForSceneHandle:(id)arg1 settings:(id)arg2 snapshotRequestContext:(id)arg3;

@end
