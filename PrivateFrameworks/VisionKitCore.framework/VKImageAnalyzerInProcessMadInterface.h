
@interface VKImageAnalyzerInProcessMadInterface : VKImageAnalyzerMadInterface {
    NSObject<OS_dispatch_queue> * _housekeepingQueue;
    NSMutableDictionary * _idsToRequests;
    int  _queueRequestID;
    NSObject<OS_dispatch_queue> * _tempMadProcessingQueue;
    NSMutableSet * _tempMadRequestQueueCancelling;
    NSMutableOrderedSet * _tempMadRequestQueueProcessing;
    NSMutableOrderedSet * _tempMadRequestQueueWaiting;
}

@property (nonatomic, readonly) NSString *errorDomain;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *housekeepingQueue;
@property (nonatomic, retain) NSMutableDictionary *idsToRequests;
@property (nonatomic) int queueRequestID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *tempMadProcessingQueue;
@property (nonatomic, retain) NSMutableSet *tempMadRequestQueueCancelling;
@property (nonatomic, retain) NSMutableOrderedSet *tempMadRequestQueueProcessing;
@property (nonatomic, retain) NSMutableOrderedSet *tempMadRequestQueueWaiting;

+ (id)sharedInterface;

- (void).cxx_destruct;
- (void)_cancelRequest:(id)arg1;
- (void)_processRequest:(id)arg1;
- (unsigned long long)_statusForRequestID:(int)arg1;
- (void)addRequestForProcessing:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelRequestID:(int)arg1;
- (id)cancelledError;
- (void)clearCompletedRequest:(id)arg1;
- (void)didFinishRequest:(id)arg1 withAnalysisResult:(id)arg2 error:(id)arg3;
- (id)errorDomain;
- (id)housekeepingQueue;
- (id)idsToRequests;
- (id)init;
- (id)mrcElementsFromImage:(struct CGImage { }*)arg1 symbologies:(id)arg2;
- (int)nextRequestID;
- (void)processNextItemIfNecessary;
- (int)processRequest:(id)arg1;
- (int)queueRequestID;
- (void)removeAndNotifyOfCancelledRequest:(id)arg1;
- (void)request:(id)arg1 didCompleteWithAnalysis:(id)arg2 error:(id)arg3;
- (void)setHousekeepingQueue:(id)arg1;
- (void)setIdsToRequests:(id)arg1;
- (void)setQueueRequestID:(int)arg1;
- (void)setTempMadProcessingQueue:(id)arg1;
- (void)setTempMadRequestQueueCancelling:(id)arg1;
- (void)setTempMadRequestQueueProcessing:(id)arg1;
- (void)setTempMadRequestQueueWaiting:(id)arg1;
- (unsigned long long)statusForRequestID:(int)arg1;
- (id)tempMadProcessingQueue;
- (id)tempMadRequestQueueCancelling;
- (id)tempMadRequestQueueProcessing;
- (id)tempMadRequestQueueWaiting;

@end
