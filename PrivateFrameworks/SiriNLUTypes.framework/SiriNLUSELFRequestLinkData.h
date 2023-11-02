
@interface SiriNLUSELFRequestLinkData : NSObject {
    SIRINLUEXTERNALUUID * _nlId;
    NSString * _resultCandidateId;
    unsigned long long  _splitCount;
    NSString * _targetName;
    NSUUID * _targetUUID;
    SIRINLUEXTERNALUUID * _trpId;
}

@property (retain) SIRINLUEXTERNALUUID *nlId;
@property (retain) NSString *resultCandidateId;
@property unsigned long long splitCount;
@property (retain) NSString *targetName;
@property (retain) NSUUID *targetUUID;
@property (retain) SIRINLUEXTERNALUUID *trpId;

- (void).cxx_destruct;
- (id)nlId;
- (id)resultCandidateId;
- (void)setNlId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setSplitCount:(unsigned long long)arg1;
- (void)setTargetName:(id)arg1;
- (void)setTargetUUID:(id)arg1;
- (void)setTrpId:(id)arg1;
- (unsigned long long)splitCount;
- (id)targetName;
- (id)targetUUID;
- (id)trpId;

@end
