
@protocol MTDelegatePackage <NSObject>

@required

- (<MTConfigDelegate> *)configDelegate;
- (<MTEnvironmentDelegate> *)environmentDelegate;
- (<MTEventRecorderDelegate> *)eventRecorderDelegate;

@end
