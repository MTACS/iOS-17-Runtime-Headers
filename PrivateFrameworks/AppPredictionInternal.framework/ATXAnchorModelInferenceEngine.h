
@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper * _contextHelper;
    NSUserDefaults * _defaults;
    ATXAnchorModelPredictionScheduler * _predictionScheduler;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic bool  _started;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)currentDuetEventForAnchor:(id)arg1;
- (void)dealloc;
- (id /* block */)entranceCallbackForAnchor:(id)arg1;
- (id /* block */)exitCallbackForAnchor:(id)arg1;
- (id)exitNotificationIdentifierForAnchor:(id)arg1;
- (void)handleAnchorEventForAnchor:(id)arg1;
- (void)handleAnchorEventForGymArrival;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)handleAnchorExitEventForGymArrival;
- (void)handleInferenceEvent:(id)arg1;
- (void)handleLOIEntrance;
- (void)handleLOIExit;
- (id)init;
- (id)notificationIdentifierForAnchor:(id)arg1;
- (void)queueHandleInferenceEvent:(id)arg1;
- (void)registerAnchorEventListenerForAnchor:(id)arg1;
- (void)registerAnchorEventListeners;
- (void)registerForAnchorEntrance:(id)arg1 cdContext:(id)arg2;
- (void)registerForAnchorExit:(id)arg1 cdContext:(id)arg2;
- (void)registerForWakingNotificationForAnchor:(id)arg1 cdContext:(id)arg2;
- (void)retryPreviouslyIncompleteInference;
- (void)setupContextStoreListenerForAnchor:(id)arg1 context:(id)arg2;
- (void)start;
- (id)supportedAnchorsForInference;
- (void)unregisterAnchorEventListenerForAnchor:(id)arg1;
- (void)unregisterAnchorEventListeners;

@end
