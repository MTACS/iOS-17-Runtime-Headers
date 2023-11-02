
@interface WFWorkflowConflictResolution : NSObject {
    bool  _keepLocal;
    bool  _keepRemote;
    NSString * _localWorkflowID;
    NSString * _remoteWorkflowID;
}

@property (nonatomic) bool keepLocal;
@property (nonatomic) bool keepRemote;
@property (nonatomic, copy) NSString *localWorkflowID;
@property (nonatomic, copy) NSString *remoteWorkflowID;

- (void).cxx_destruct;
- (id)description;
- (bool)keepLocal;
- (bool)keepRemote;
- (id)localWorkflowID;
- (id)remoteWorkflowID;
- (void)setKeepLocal:(bool)arg1;
- (void)setKeepRemote:(bool)arg1;
- (void)setLocalWorkflowID:(id)arg1;
- (void)setRemoteWorkflowID:(id)arg1;

@end
