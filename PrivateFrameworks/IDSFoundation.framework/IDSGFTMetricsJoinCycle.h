
@interface IDSGFTMetricsJoinCycle : IDSGFTMetricsReferencePoint {
    double  _remoteActiveTime;
}

- (void)decryptedBlobOverQUIC:(id)arg1;
- (id)initWithFromType:(id)arg1 fromUniqueID:(id)arg2 anonymizer:(id)arg3 templateDictionary:(id)arg4;
- (void)localDidJoin;
- (void)localDidJoinAtTime:(double)arg1;
- (void)receivedAllocateResponseAtTime:(double)arg1;
- (void)receivedKMOverPush;
- (void)receivedKMOverPushViaCache;
- (void)receivedKMOverPushViaCacheAtTime:(double)arg1;
- (void)receivedKMOverQR;
- (void)receivedKMOverQUIC;
- (void)receivedPreKeyOverPush;
- (void)receivedPreKeyOverQUIC;
- (void)receivedUnverifiedKMOverQUIC;
- (double)referenceTimeForTimeBase:(double)arg1;
- (void)remoteDidBecomeActive;
- (void)remoteDidJoin;
- (void)requestedKM;

@end
