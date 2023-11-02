
@interface HFPredictionsManager : NSObject <HMUserActionPredictionControllerDelegate> {
    <HFPredictionsManagerDelegate> * _delegate;
    NSArray * _filterTypes;
    HMHome * _home;
    NAFuture * _initialPredictionUpdateFuture;
    unsigned long long  _predictionLimit;
    NSObject<OS_dispatch_queue> * _predictionQueue;
    NSArray * _predictions;
    <HFPredictionsController> * _predictionsController;
    bool  _wasQueriedForInFlightPredictions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HFPredictionsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *filterTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NAFuture *initialPredictionUpdateFuture;
@property (nonatomic) unsigned long long predictionLimit;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *predictionQueue;
@property (nonatomic, retain) NSArray *predictions;
@property (nonatomic, retain) <HFPredictionsController> *predictionsController;
@property (readonly) Class superclass;
@property (nonatomic) bool wasQueriedForInFlightPredictions;

- (void).cxx_destruct;
- (id)_homeKitObjectForAccessoryUUID:(id)arg1;
- (id)_homeKitObjectForMediaSystemUUID:(id)arg1;
- (id)_homeKitObjectForSceneUUID:(id)arg1;
- (id)_homeKitObjectForServiceGroupUUID:(id)arg1;
- (id)_homeKitObjectForServiceUUID:(id)arg1;
- (id)_processUserActionPredictions:(id)arg1;
- (void)_queryUserActionPredictions;
- (void)_queryUserActionPredictionsOnQueue;
- (id)delegate;
- (id)fetchUserActionPredictions;
- (id)fetchUserActionPredictionsAndWaitForInitialUpdate:(bool)arg1;
- (id)filterTypes;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1 predictionsController:(id)arg2 delegate:(id)arg3 predictionLimit:(unsigned long long)arg4;
- (id)initWithHome:(id)arg1 predictionsController:(id)arg2 delegate:(id)arg3 predictionLimit:(unsigned long long)arg4 filterTypes:(id)arg5;
- (id)initialPredictionUpdateFuture;
- (unsigned long long)predictionLimit;
- (id)predictionQueue;
- (id)predictions;
- (id)predictionsController;
- (void)setDelegate:(id)arg1;
- (void)setInitialPredictionUpdateFuture:(id)arg1;
- (void)setPredictionLimit:(unsigned long long)arg1;
- (void)setPredictionQueue:(id)arg1;
- (void)setPredictions:(id)arg1;
- (void)setPredictionsController:(id)arg1;
- (void)setWasQueriedForInFlightPredictions:(bool)arg1;
- (void)userActionPredictionController:(id)arg1 didUpdatePredictions:(id)arg2;
- (bool)wasQueriedForInFlightPredictions;

@end
