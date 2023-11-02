
@interface SMUSystemDisplayLayoutMonitor : NSObject <SMUSystemDisplayLayoutMonitoring> {
    FBSDisplayLayoutMonitor * _layoutMonitor;
    id /* block */  transitionHandler;
}

@property (nonatomic, readonly) NSArray *currentLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSDisplayLayoutMonitor *layoutMonitor;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transitionHandler;

+ (id)externalDisplayLayoutMonitorWithIdentity:(id)arg1;
+ (id)mainDisplayLayoutMonitor;

- (void).cxx_destruct;
- (id)currentLayout;
- (void)dealloc;
- (void)handleUpdatedLayout:(id)arg1 transitionContext:(id)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)layoutMonitor;
- (void)setTransitionHandler:(id /* block */)arg1;
- (id /* block */)transitionHandler;

@end
