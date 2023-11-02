
@interface HDSPMacReadyProvider : NSObject <HDSPEnvironmentAware, HDSPSystemReadyProvider> {
    <HDSPSystemReadyDelegate> * _delegate;
    HDSPEnvironment * _environment;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDSPSystemReadyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemReady;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (bool)isInDemoMode;
- (bool)isSystemReady;
- (void)setDelegate:(id)arg1;

@end
