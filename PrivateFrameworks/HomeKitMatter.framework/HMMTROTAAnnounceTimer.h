
@interface HMMTROTAAnnounceTimer : HMFObject <HMFTimerDelegate> {
    HMFTimer * _announceTimer;
    NSNumber * _endpoint;
    NSNumber * _nodeId;
    HMMTRAccessoryServer * _server;
}

@property (nonatomic, retain) HMFTimer *announceTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *nodeId;
@property (nonatomic, readonly) HMMTRAccessoryServer *server;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)announceTimer;
- (id)endpoint;
- (id)initWithServer:(id)arg1 nodeId:(id)arg2 endpoint:(id)arg3 queue:(id)arg4;
- (id)logIdentifier;
- (id)nodeId;
- (id)server;
- (void)setAnnounceTimer:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setNodeId:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFire:(id)arg1;

@end
