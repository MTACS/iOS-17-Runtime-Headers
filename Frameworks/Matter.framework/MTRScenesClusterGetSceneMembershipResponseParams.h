
@interface MTRScenesClusterGetSceneMembershipResponseParams : NSObject <NSCopying> {
    NSNumber * _capacity;
    NSNumber * _groupID;
    NSArray * _sceneList;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *capacity;
@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSArray *sceneList;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)capacity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupID;
- (id)groupId;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)sceneList;
- (void)setCapacity:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setSceneList:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;

@end
