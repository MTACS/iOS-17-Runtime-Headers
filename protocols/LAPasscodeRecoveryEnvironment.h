
@protocol LAPasscodeRecoveryEnvironment <NSObject>

@required

- (<LAPSPasscodeChangeController> *)controllerWithConfig:(LAPasscodeRecoveryEnvironmentConfig *)arg1;
- (<LAPSPasscodeChangePreflightController> *)preflightController;

@end
