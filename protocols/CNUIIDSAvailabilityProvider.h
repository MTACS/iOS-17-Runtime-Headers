
@protocol CNUIIDSAvailabilityProvider <NSObject>

@required

- (CNObservable *)validateHandlesForExpanse:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForFaceTime:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;
- (CNObservable *)validateHandlesForIMessage:(NSArray *)arg1 schedulerProvider:(id <CNSchedulerProvider>)arg2;

@end
