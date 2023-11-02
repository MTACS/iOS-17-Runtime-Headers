
@interface AMDClient : NSObject {
    id /* block */  _callback;
    NSString * _dsId;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSString *dsId;

- (void).cxx_destruct;
- (id)appSegmentData:(id)arg1 completion:(id /* block */)arg2;
- (id)callDebugEvent:(id)arg1 withPayload:(id)arg2;
- (void)callIAESegmentNotificationHandler;
- (id /* block */)callback;
- (void)clearDataForDSID:(id)arg1 completion:(id /* block */)arg2;
- (id)dsId;
- (void)fetchAppSegments:(id)arg1 completion:(id /* block */)arg2;
- (void)getAppSegmentDataWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)getFeature:(id)arg1;
- (id)getFeatureStub:(id)arg1;
- (id)getModelPath:(id)arg1 error:(id*)arg2;
- (id)getModelPathForUsecase:(id)arg1 withTreatmentId:(id)arg2 inDomain:(id)arg3 error:(id*)arg4;
- (id)getMusicModelPathForUsecase:(id)arg1 withTreatmentId:(id)arg2 error:(id*)arg3;
- (void)iaeSegmentNotificationHandler:(id)arg1;
- (id)sendBatchedPECSimilarityScores:(id)arg1 withCallHandle:(id)arg2 andRequestError:(id)arg3 error:(id*)arg4;
- (id)sendBatchedPIRData:(id)arg1 forKeywords:(id)arg2 withCallHandle:(id)arg3 andRequestError:(id)arg4 error:(id*)arg5;
- (id)sendPECSimilarityScores:(id)arg1 withCallHandle:(id)arg2 andRequestError:(id)arg3 error:(id*)arg4;
- (id)sendPIRData:(id)arg1 forKeyword:(id)arg2 withCallHandle:(id)arg3 andRequestError:(id)arg4 error:(id*)arg5;
- (id)sendPIRData:(id)arg1 forKeyword:(id)arg2 withCallHandle:(id)arg3 error:(id*)arg4;
- (void)setCallback:(id /* block */)arg1;
- (void)setDsId:(id)arg1;
- (void)subscribeToSegmentNotificationWithCallback:(id /* block */)arg1 forAccountDSID:(id)arg2;
- (void)unsubscribeFromSegmentNotification;

@end
