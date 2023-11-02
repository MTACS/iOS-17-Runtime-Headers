
@interface IDSGFTMetricsMembershipChange : IDSGFTMetricsReferencePoint {
    double  _referenceTime;
}

- (id)initWithFromType:(id)arg1 fromUniqueID:(id)arg2 anonymizer:(id)arg3 templateDictionary:(id)arg4;
- (void)receivedKMOverPushFromToken:(id)arg1;
- (void)receivedKMOverPushViaCacheForToken:(id)arg1;
- (void)receivedKMOverPushViaCacheForToken:(id)arg1 atTime:(double)arg2;
- (void)receivedKMOverQRFromToken:(id)arg1;
- (void)receivedKMOverQUICFromToken:(id)arg1;
- (void)receivedUnverifiedKMOverQUICFromToken:(id)arg1;
- (double)referenceTime;
- (void)sendRatchetedKMtoAVCForToken:(id)arg1;

@end
