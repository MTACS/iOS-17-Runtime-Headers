
@interface WFApplicationVisibilitySystemEventProvider : NSObject <WFSystemEventProvider> {
    FBSDisplayLayoutMonitor * _monitor;
    bool  _state;
    id /* block */  eventCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ eventCallback;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *monitor;
@property (nonatomic) bool state;
@property (readonly) Class superclass;

+ (bool)isAvailable;

- (void).cxx_destruct;
- (long long)applicationDidAppearEventType;
- (long long)applicationDidDisappearEventType;
- (void)dealloc;
- (id /* block */)eventCallback;
- (void)handleLayoutChange:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)layoutContainsApplication:(id)arg1;
- (id)monitor;
- (void)resume;
- (void)setEventCallback:(id /* block */)arg1;
- (void)setState:(bool)arg1;
- (bool)state;

@end
