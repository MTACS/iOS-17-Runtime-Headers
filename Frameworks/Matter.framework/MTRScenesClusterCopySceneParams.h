
@interface MTRScenesClusterCopySceneParams : NSObject <NSCopying> {
    NSNumber * _groupIdentifierFrom;
    NSNumber * _groupIdentifierTo;
    NSNumber * _mode;
    NSNumber * _sceneIdentifierFrom;
    NSNumber * _sceneIdentifierTo;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSNumber *groupIdFrom;
@property (nonatomic, copy) NSNumber *groupIdTo;
@property (nonatomic, copy) NSNumber *groupIdentifierFrom;
@property (nonatomic, copy) NSNumber *groupIdentifierTo;
@property (nonatomic, copy) NSNumber *mode;
@property (nonatomic, copy) NSNumber *sceneIdFrom;
@property (nonatomic, copy) NSNumber *sceneIdTo;
@property (nonatomic, copy) NSNumber *sceneIdentifierFrom;
@property (nonatomic, copy) NSNumber *sceneIdentifierTo;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupIdFrom;
- (id)groupIdTo;
- (id)groupIdentifierFrom;
- (id)groupIdentifierTo;
- (id)init;
- (id)mode;
- (id)sceneIdFrom;
- (id)sceneIdTo;
- (id)sceneIdentifierFrom;
- (id)sceneIdentifierTo;
- (id)serverSideProcessingTimeout;
- (void)setGroupIdFrom:(id)arg1;
- (void)setGroupIdTo:(id)arg1;
- (void)setGroupIdentifierFrom:(id)arg1;
- (void)setGroupIdentifierTo:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setSceneIdFrom:(id)arg1;
- (void)setSceneIdTo:(id)arg1;
- (void)setSceneIdentifierFrom:(id)arg1;
- (void)setSceneIdentifierTo:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
