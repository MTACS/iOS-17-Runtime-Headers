
@interface RTTUIConversationControllerCoordinator : NSObject <AXHeardServerDelegate> {
    NSPointerArray * _conversationControllers;
    struct __CTServerConnection { } * _ctConnection;
    NSIndexPath * _inProgressRealTimeIndexPath;
    RTTUtterance * _inProgressRealTimeUtterance;
    NSString * _latestCallScreeningTranscriptionID;
    bool  _processingUtteranceBuffer;
    NSLock * _realtimeSendLock;
    NSMutableSet * _registeredCalls;
    NSMutableArray * _utteranceBuffer;
    NSObject<OS_dispatch_queue> * _utteranceRequestQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexPath *inProgressRealTimeIndexPath;
@property (nonatomic, readonly) RTTUtterance *inProgressRealTimeUtterance;
@property (nonatomic) bool processingUtteranceBuffer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *utteranceBuffer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned long long)arg2 forCellPath:(id)arg3 call:(id)arg4;
- (void)addConversationController:(id)arg1;
- (id)conversationControllers;
- (void)hearingServerDidDie:(id)arg1;
- (id)inProgressRealTimeIndexPath;
- (id)inProgressRealTimeUtterance;
- (id)init;
- (void)processCallScreeningTranscription:(id)arg1 transcriptionID:(id)arg2 callUUID:(id)arg3;
- (void)processUtteranceQueue;
- (bool)processingUtteranceBuffer;
- (bool)realtimeTextDidChange:(id)arg1 forUtterance:(id)arg2 lastRowPath:(id)arg3;
- (void)registerForCallUpdates:(id)arg1;
- (void)sendNewUtteranceString:(id)arg1 controller:(id)arg2;
- (void)setProcessingUtteranceBuffer:(bool)arg1;
- (void)setUtteranceBuffer:(id)arg1;
- (id)utteranceBuffer;
- (id)viewControllerForCallUUID:(id)arg1;

@end
