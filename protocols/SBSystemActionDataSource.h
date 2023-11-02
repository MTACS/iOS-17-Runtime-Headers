
@protocol SBSystemActionDataSource <SBSystemActionDataSourceObservable, SBSystemActionExecutorProviding>

@required

- (SBSystemAction *)selectedSystemAction;

@end
