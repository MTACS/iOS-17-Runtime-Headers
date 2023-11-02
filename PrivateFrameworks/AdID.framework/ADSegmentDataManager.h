
@interface ADSegmentDataManager : ADSingleton {
    NSNumber * _pendingJingleRequestToken;
    bool  _segmentUpdateInProgress;
}

@property (nonatomic, copy) NSNumber *pendingJingleRequestToken;
@property (nonatomic, readonly) bool segmentRetrievalInProgress;
@property (nonatomic) bool segmentUpdateInProgress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_ageDistributionOverrides;
- (id)checkTokenAndDSID:(id)arg1;
- (void)handleJingleSegmentResponse:(id)arg1 activeRecord:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleSegmentUpdateResponse:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleSuccessfulJingleSegmentResponse:(id)arg1 dsidRecord:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)isEligibleForSensitiveContent:(long long)arg1;
- (id)noiseAppliedBirthYearFromActual:(id)arg1;
- (id)parseBirthYearFromSegmentData:(id)arg1;
- (id)pendingJingleRequestToken;
- (void)populateAccountTypeFields:(id)arg1;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)retrieveSegmentData:(id)arg1 forceSegments:(bool)arg2 ignoreTimestamps:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)retrieveSegmentDataIgnoringTimestamps:(id)arg1 forceSegments:(bool)arg2 completionHandler:(id /* block */)arg3;
- (bool)segmentRetrievalInProgress;
- (bool)segmentUpdateInProgress;
- (void)sendSegmentDataToAdPlatforms:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPendingJingleRequestToken:(id)arg1;
- (void)setSegmentUpdateInProgress:(bool)arg1;
- (bool)shouldSendSegmentDataToAdPlatforms:(id)arg1;
- (bool)shouldSendSegmentRequest:(id)arg1 ignoreTimestamps:(bool)arg2;
- (bool)verifyGenderInSegmentData:(id)arg1;

@end
