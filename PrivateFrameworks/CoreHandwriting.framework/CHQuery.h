
@interface CHQuery : NSObject <CHRecognitionSessionObserver> {
    bool  __queryActive;
    CHRecognitionSessionResult * _currentProcessingSessionResult;
    <CHQueryDelegate> * _delegate;
    <CHStrokeProviderVersion> * _lastProcessedStrokeProviderVersion;
    double  _lastProcessedTime;
    double  _preferredUpdatesInterval;
    NSObject<OS_dispatch_queue> * _processingQueue;
    CHRecognitionSession * _recognitionSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugName;
@property (nonatomic) <CHQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) <CHStrokeProviderVersion> *lastProcessedStrokeProviderVersion;
@property (nonatomic) double preferredUpdatesInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) CHRecognitionSession *recognitionSession;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugName;
- (id)delegate;
- (id)init;
- (id)initWithRecognitionSession:(id)arg1;
- (id)lastProcessedStrokeProviderVersion;
- (void)pause;
- (double)preferredRecognitionResultUpdatesInterval;
- (double)preferredUpdatesInterval;
- (id)processingQueue;
- (void)q_queryResultDidChange;
- (id)q_sessionResult;
- (void)q_setNeedsQueryResultUpdating;
- (void)q_updateQueryResult;
- (id)recognitionSession;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreferredUpdatesInterval:(double)arg1;
- (void)start;
- (void)waitForPendingUpdates;

@end
