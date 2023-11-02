
@interface IMDMessageProcessingController : NSObject {
    <IMDMessagePTaskStore> * _pTaskStore;
    NSTimer * _processingTimer;
}

@property (nonatomic, retain) <IMDMessagePTaskStore> *pTaskStore;
@property (nonatomic, retain) NSTimer *processingTimer;

- (void)_indexSpotlightIfNeedForPTask:(id)arg1;
- (bool)_pref_IMDCoreSpotlightHasMigrated;
- (void)_processingTimerFired;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)arg1;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithMessagesPTaskStore:(id)arg1;
- (void)messageProcessingTaskAdded:(id)arg1;
- (id)pTaskStore;
- (id)processingTimer;
- (void)scheduleInitialProcessingCheck;
- (void)setPTaskStore:(id)arg1;
- (void)setProcessingTimer:(id)arg1;

@end