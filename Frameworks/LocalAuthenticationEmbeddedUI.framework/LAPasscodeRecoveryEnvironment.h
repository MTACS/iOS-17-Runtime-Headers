
@interface LAPasscodeRecoveryEnvironment : NSObject <LAPasscodeRecoveryEnvironment>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_system;
- (id)controllerWithConfig:(id)arg1;
- (id)preflightController;

@end
