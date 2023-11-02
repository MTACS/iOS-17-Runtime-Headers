
@interface XRFrameActivityManager : NSObject <XRFrameActivityManagerPrivate, XRMobileAgentStop> {
    unsigned char  _currentSlot;
    int  _kdebugCodeBase;
    struct shared_ptr<xray::scheduler::ActivityManager> { 
        struct ActivityManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _managerImpl;
    unsigned long long  _ringSignpostID;
    struct shared_ptr<xray::scheduler::ActivityManager> { 
        struct ActivityManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _secondTierManagerImpl;
    unsigned long long  _signpostID;
    XRFrameActivity * _syncActivity;
}

@property (nonatomic, readonly) int agentStopDiagnosticsTypeCode;
@property (nonatomic, readonly) unsigned char currentSlot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (unsigned int)_activityQoS;
+ (bool)_establishesAffinity;
+ (int)_identifierForSignposting;
+ (bool)enableConcurrentActivities;
+ (void)initialize;
+ (bool)supportsQoS;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_acquiredMinorFrame:(unsigned char)arg1;
- (void)_escortMinorFrameAgentToExit:(id)arg1;
- (void)_extendingMinorFrame:(unsigned char)arg1;
- (void)_finalShutdown;
- (void*)_managerImplPtr;
- (void)_needsScheduling;
- (void)_prepareMinorFrameAgent:(id)arg1;
- (void)_reevaluateArrivingAgent:(id)arg1;
- (void*)_secondTierManagerImplPtr;
- (void)_shutdown;
- (void)_startingMajorFrame;
- (void)_underrunMinorFrame:(unsigned char)arg1;
- (void)_yieldingMinorFrame:(unsigned char)arg1;
- (void)activateNextMajorFrame;
- (int)agentStopDiagnosticsTypeCode;
- (unsigned char)currentSlot;
- (void)dealloc;
- (void)enteringMinorFrame:(unsigned char)arg1;
- (void)extendingMinorFrame:(unsigned char)arg1;
- (bool)holdBackArrivingAgent:(id)arg1;
- (bool)holdBackRevisitingAgent:(id)arg1;
- (id)init;
- (id)initWithRing:(id)arg1;
- (void)performDuringMinorFrame:(id /* block */)arg1;
- (void)performOutsideMinorFrame:(id /* block */)arg1;
- (void)receiveMobileAgent:(id)arg1;
- (void)scheduleActivity:(id /* block */)arg1;
- (id)scheduleActivityAsOperation:(id /* block */)arg1;
- (void)scheduleInactivity:(id /* block */)arg1;
- (void)setupVisitDuringMinorFrame:(id)arg1 agent:(id)arg2 mode:(id)arg3 ticket:(id)arg4;
- (void)startingMajorFrame;
- (void)underrunMinorFrame:(unsigned char)arg1;
- (void)yieldingMinorFrame:(unsigned char)arg1;

@end
