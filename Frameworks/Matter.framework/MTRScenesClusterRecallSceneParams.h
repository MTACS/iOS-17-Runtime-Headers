
@interface MTRScenesClusterRecallSceneParams : NSObject <NSCopying> {
    NSNumber * _groupID;
    NSNumber * _sceneID;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSNumber *sceneID;
@property (nonatomic, copy) NSNumber *sceneId;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupID;
- (id)groupId;
- (id)init;
- (id)sceneID;
- (id)sceneId;
- (id)serverSideProcessingTimeout;
- (void)setGroupID:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setSceneID:(id)arg1;
- (void)setSceneId:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)transitionTime;

@end
