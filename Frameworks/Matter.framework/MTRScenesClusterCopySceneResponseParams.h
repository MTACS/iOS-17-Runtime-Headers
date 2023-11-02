
@interface MTRScenesClusterCopySceneResponseParams : NSObject <NSCopying> {
    NSNumber * _groupIdentifierFrom;
    NSNumber * _sceneIdentifierFrom;
    NSNumber * _status;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *groupIdFrom;
@property (nonatomic, copy) NSNumber *groupIdentifierFrom;
@property (nonatomic, copy) NSNumber *sceneIdFrom;
@property (nonatomic, copy) NSNumber *sceneIdentifierFrom;
@property (nonatomic, copy) NSNumber *status;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const struct DecodableType { unsigned char x1; unsigned short x2; unsigned char x3; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupIdFrom;
- (id)groupIdentifierFrom;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)sceneIdFrom;
- (id)sceneIdentifierFrom;
- (void)setGroupIdFrom:(id)arg1;
- (void)setGroupIdentifierFrom:(id)arg1;
- (void)setSceneIdFrom:(id)arg1;
- (void)setSceneIdentifierFrom:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)status;
- (id)timedInvokeTimeoutMs;

@end
