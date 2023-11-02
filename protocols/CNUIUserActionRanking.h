
@protocol CNUIUserActionRanking <NSObject>

@required

- (CNObservable *)selectRecentActionItems:(CNObservable *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNFuture *)sortActionItems:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;

@end
