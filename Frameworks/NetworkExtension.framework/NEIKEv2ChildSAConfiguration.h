
@interface NEIKEv2ChildSAConfiguration : NSObject <NEPrettyDescription, NSCopying> {
    NSArray * _localTrafficSelectors;
    unsigned long long  _mode;
    bool  _preferInitiatorProposalOrder;
    NSArray * _proposals;
    NSArray * _remoteTrafficSelectors;
    unsigned int  _replayWindowSize;
    bool  _sequencePerTrafficClass;
}

@property (retain) NSArray *localTrafficSelectors;
@property unsigned long long mode;
@property bool preferInitiatorProposalOrder;
@property (nonatomic, retain) NSArray *proposals;
@property (retain) NSArray *remoteTrafficSelectors;
@property unsigned int replayWindowSize;
@property bool sequencePerTrafficClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (id)localTrafficSelectors;
- (unsigned long long)mode;
- (bool)preferInitiatorProposalOrder;
- (id)proposals;
- (id)remoteTrafficSelectors;
- (unsigned int)replayWindowSize;
- (bool)sequencePerTrafficClass;
- (void)setLocalTrafficSelectors:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setPreferInitiatorProposalOrder:(bool)arg1;
- (void)setProposals:(id)arg1;
- (void)setRemoteTrafficSelectors:(id)arg1;
- (void)setReplayWindowSize:(unsigned int)arg1;
- (void)setSequencePerTrafficClass:(bool)arg1;

@end
