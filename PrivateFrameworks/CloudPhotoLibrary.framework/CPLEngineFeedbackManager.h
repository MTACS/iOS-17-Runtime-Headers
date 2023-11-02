
@interface CPLEngineFeedbackManager : NSObject <CPLEngineComponent> {
    bool  _closed;
    bool  _deactivated;
    bool  _disableFeedback;
    CPLEngineLibrary * _engineLibrary;
    NSURL * _feedbackMessagesURL;
    NSDate * _lastAttemptDate;
    NSString * _libraryIdentifier;
    NSArray * _messagesSending;
    NSMutableArray * _messagesToSend;
    bool  _opened;
    NSObject<OS_dispatch_queue> * _queue;
    <CPLEngineTransportSendFeedbackTask> * _sendTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableFeedback;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appendMessage:(id)arg1;
- (void)_appendMessages:(id)arg1;
- (void)_load;
- (void)_reallySendFeedbackToServer;
- (void)_save;
- (void)_sendFeedbackToServerIfNecessary;
- (void)closeAndDeactivate:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (bool)disableFeedback;
- (id)engineLibrary;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)reportEndOfResetWithUUID:(id)arg1 reason:(id)arg2;
- (void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1;
- (void)reportMessage:(id)arg1;
- (void)reportMessages:(id)arg1;
- (void)reportMiscInformation:(id)arg1;
- (void)reportResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3;
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;
- (void)sendFeedbackToServerIfNecessary;
- (void)setDisableFeedback:(bool)arg1;
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(id /* block */)arg3;

@end
