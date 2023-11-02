
@interface XRSpace : NSObject <XRMobileAgentStop> {
    NSMutableSet * _notificationShims;
    NSString * _opName;
    bool  _overridesQoS;
    NSOperationQueue * _queue;
    unsigned long long  _seqNum;
    bool  _supportsOpNames;
    NSMutableString * _tag;
    NSMutableDictionary * _userDataByToken;
}

@property (nonatomic, readonly) int agentStopDiagnosticsTypeCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsOpNames;

+ (void)runWhenOperationFinishes:(id)arg1 block:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_postQueueStateChanged;
- (void)_removeNotificationShim:(id)arg1;
- (id)_scheduleOperationFromCurrentQueue:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)afterOperation:(id)arg1 block:(id /* block */)arg2;
- (id)afterOperation:(id)arg1 priority:(long long)arg2 spaceBlock:(id /* block */)arg3;
- (id)afterOperation:(id)arg1 spaceBlock:(id /* block */)arg2;
- (id)afterOperations:(id)arg1 priority:(long long)arg2 spaceBlock:(id /* block */)arg3;
- (id)afterOperationsRunBlock:(id)arg1;
- (bool)currentlyInThisSpace;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isBusy;
- (bool)isOpValidForSpace:(id)arg1;
- (bool)isSerial;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)operationCount;
- (id)queue;
- (void)receiveMobileAgent:(id)arg1;
- (void)removeUserDataForToken:(id)arg1;
- (void)replaceUserData:(id)arg1 forToken:(id)arg2;
- (void)requestLocalNotification:(id)arg1 object:(id)arg2 observer:(id)arg3 block:(id /* block */)arg4;
- (void)setSupportsOpNames:(bool)arg1;
- (void)setupVisitAfterOperation:(id)arg1 itinerary:(id)arg2 mode:(id)arg3;
- (id)spaceName;
- (void)stopObservationsOfObject:(id)arg1 forObserver:(id)arg2;
- (id)storeUserData:(id)arg1;
- (bool)supportsOpNames;
- (id)userDataForToken:(id)arg1;

@end
