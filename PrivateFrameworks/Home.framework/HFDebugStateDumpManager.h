
@interface HFDebugStateDumpManager : NSObject {
    int  _logStateDumpNotifyToken;
    NSMutableDictionary * _stateDumpHandlersByName;
    NSObject<OS_dispatch_queue> * _stateHandlerQueue;
}

@property (nonatomic, readonly) int logStateDumpNotifyToken;
@property (nonatomic, retain) NSMutableDictionary *stateDumpHandlersByName;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateHandlerQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_listenForAttachmentRequestNotifications;
- (id)_performStateDump:(bool)arg1;
- (void)_writeStateDump;
- (void)dealloc;
- (id)init;
- (int)logStateDumpNotifyToken;
- (id)registerStateDumpHandler:(id /* block */)arg1 withName:(id)arg2;
- (void)setStateDumpHandlersByName:(id)arg1;
- (void)setStateHandlerQueue:(id)arg1;
- (id)stateDumpHandlersByName;
- (id)stateHandlerQueue;

@end
