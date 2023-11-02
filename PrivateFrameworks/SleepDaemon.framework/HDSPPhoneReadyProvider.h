
@interface HDSPPhoneReadyProvider : NSObject <HDSPEnvironmentAware, HDSPSpringboardObserver, HDSPSystemReadyProvider> {
    <HDSPSystemReadyDelegate> * _delegate;
    HDSPEnvironment * _environment;
    HDSPSpringboardMonitor * _springboardMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSystemReadyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemReady;
@property (nonatomic, readonly) HDSPSpringboardMonitor *springboardMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (bool)isSystemReady;
- (void)setDelegate:(id)arg1;
- (void)springboardDidStart;
- (id)springboardMonitor;

@end
