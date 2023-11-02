
@interface MTRScenesClusterRemoveSceneResponseParams : NSObject <NSCopying> {
    NSNumber * _groupID;
    NSNumber * _sceneID;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *groupID;
@property (nonatomic, copy) NSNumber *groupId;
@property (nonatomic, copy) NSNumber *sceneID;
@property (nonatomic, copy) NSNumber *sceneId;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned char x1; unsigned short x2; unsigned char x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupID;
- (id)groupId;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)sceneID;
- (id)sceneId;
- (void)setGroupID:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setSceneID:(id)arg1;
- (void)setSceneId:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;

@end
