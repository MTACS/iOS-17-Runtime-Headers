
@interface SBDraggingSystemManager : NSObject <UIDraggingSystemMonitorDelegate> {
    NSMapTable * _commandeerReasons;
    NSHashTable * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)dragSessionDidBegin:(id)arg1;
- (void)dragSessionDidEnd:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCommandeered:(bool)arg1 forDraggingSystemSession:(id)arg2 forReason:(id)arg3;
- (void)setCommandeered:(bool)arg1 forDropSession:(id)arg2 forReason:(id)arg3;
- (id)touchRoutingPolicyForBeginningDragSessionWithInfo:(id)arg1;

@end
