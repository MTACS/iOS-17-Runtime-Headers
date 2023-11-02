
@protocol CNUIDefaultUserActionFetcher <NSObject>

@required

- (CNObservable *)defaultActionItemForActionItems:(CNObservable *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)observableForDefaultActionsChanged;

@end
