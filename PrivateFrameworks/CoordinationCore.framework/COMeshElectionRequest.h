
@interface COMeshElectionRequest : COMeshBaseBallotRequest <COOnDemandCreationMeshRequestProtocol> {
    int  _listeningPort;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int listeningPort;
@property (readonly) Class superclass;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithBallot:(id)arg1 generation:(unsigned long long)arg2 listeningPort:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (int)listeningPort;

@end
