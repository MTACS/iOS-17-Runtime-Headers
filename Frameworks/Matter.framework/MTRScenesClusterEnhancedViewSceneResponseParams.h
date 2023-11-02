
@interface MTRScenesClusterEnhancedViewSceneResponseParams : NSObject <NSCopying> {
    NSArray * _extensionFieldSets;
    NSNumber * _groupID;
    NSNumber * _sceneID;
    NSString * _sceneName;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _transitionTime;
}

@property (nonatomic, copy) NSArray *extensionFieldSets;
@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSNumber *sceneID;
@property (nonatomic, copy) NSNumber *sceneId;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *transitionTime;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extensionFieldSets;
- (id)groupID;
- (id)groupId;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)sceneID;
- (id)sceneId;
- (id)sceneName;
- (void)setExtensionFieldSets:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setSceneID:(id)arg1;
- (void)setSceneId:(id)arg1;
- (void)setSceneName:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setTransitionTime:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;
- (id)transitionTime;

@end
