
@interface WFWorkflowConflict : NSObject {
    NSString * _localWorkflowID;
    WFWorkflowRecord * _localWorkflowRecord;
    NSString * _remoteWorkflowID;
    WFWorkflowRecord * _remoteWorkflowRecord;
}

@property (nonatomic, copy) NSString *localWorkflowID;
@property (nonatomic, retain) WFWorkflowRecord *localWorkflowRecord;
@property (nonatomic, copy) NSString *remoteWorkflowID;
@property (nonatomic, retain) WFWorkflowRecord *remoteWorkflowRecord;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (id)localWorkflowID;
- (id)localWorkflowRecord;
- (id)remoteWorkflowID;
- (id)remoteWorkflowRecord;
- (id)resolutionKeepingLocal:(bool)arg1 keepingRemote:(bool)arg2;
- (void)setLocalWorkflowID:(id)arg1;
- (void)setLocalWorkflowRecord:(id)arg1;
- (void)setRemoteWorkflowID:(id)arg1;
- (void)setRemoteWorkflowRecord:(id)arg1;

@end
