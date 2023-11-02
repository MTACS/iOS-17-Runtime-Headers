
@interface PXPhotoAnalysisStatusController : PXObservable {
    bool  __didReceiveGraphFractionCompleted;
    NSError * __graphError;
    bool  __graphReady;
    NSDate * __initialUpdateDate;
    NSDate * __lastGraphBecameReadyDate;
    bool  __requestingGraphFractionCompleted;
    NSMutableArray * __retryBlocks;
    double  _graphFractionCompleted;
    long long  _graphStatus;
    bool  _hasBeenReadyForSomeTime;
    struct { 
        bool graphStatus; 
    }  _needsUpdateFlags;
}

@property (setter=_setDidReceiveGraphFractionCompleted:, nonatomic) bool _didReceiveGraphFractionCompleted;
@property (setter=_setGraphError:, nonatomic, retain) NSError *_graphError;
@property (getter=_isGraphReady, setter=_setGraphReady:, nonatomic) bool _graphReady;
@property (setter=_setInitialUpdateDate:, nonatomic, retain) NSDate *_initialUpdateDate;
@property (setter=_setLastGraphBecameReadyDate:, nonatomic, retain) NSDate *_lastGraphBecameReadyDate;
@property (getter=_isRequestingGraphFractionCompleted, setter=_setRequestingGraphFractionCompleted:, nonatomic) bool _requestingGraphFractionCompleted;
@property (nonatomic, readonly) NSMutableArray *_retryBlocks;
@property (setter=_setGraphFractionCompleted:, nonatomic) double graphFractionCompleted;
@property (setter=_setGraphStatus:, nonatomic) long long graphStatus;
@property (setter=_setHasBeenReadyForSomeTime:, nonatomic) bool hasBeenReadyForSomeTime;
@property (nonatomic, readonly) NSString *stateDescription;

+ (id)sharedStatusController;

- (void).cxx_destruct;
- (void)_dequeueAndPerformBlocks:(id)arg1;
- (bool)_didReceiveGraphFractionCompleted;
- (id)_graphError;
- (void)_handleGraphFractionCompletedReply:(id)arg1 error:(id)arg2;
- (void)_handleGraphReadyForSomeTimeForDate:(id)arg1;
- (void)_handleGraphReadyReplyWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_handleInitialGraceDelay;
- (id)_initialUpdateDate;
- (void)_invalidateGraphStatus;
- (bool)_isGraphReady;
- (bool)_isRequestingGraphFractionCompleted;
- (bool)_isWithinGracePeriod;
- (id)_lastGraphBecameReadyDate;
- (bool)_needsUpdate;
- (void)_requestGraphFractionCompleted;
- (void)_requestGraphReady;
- (id)_retryBlocks;
- (void)_setDidReceiveGraphFractionCompleted:(bool)arg1;
- (void)_setGraphError:(id)arg1;
- (void)_setGraphFractionCompleted:(double)arg1;
- (void)_setGraphReady:(bool)arg1;
- (void)_setGraphStatus:(long long)arg1;
- (void)_setHasBeenReadyForSomeTime:(bool)arg1;
- (void)_setInitialUpdateDate:(id)arg1;
- (void)_setLastGraphBecameReadyDate:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setRequestingGraphFractionCompleted:(bool)arg1;
- (void)_updateGraphStatusIfNeeded;
- (void)_updateIfNeeded;
- (void)didPerformChanges;
- (double)graphFractionCompleted;
- (long long)graphStatus;
- (bool)hasBeenReadyForSomeTime;
- (id)init;
- (id)mutableChangeObject;
- (void)registerRetryBlock:(id /* block */)arg1;
- (id)stateDescription;
- (void)update;

@end