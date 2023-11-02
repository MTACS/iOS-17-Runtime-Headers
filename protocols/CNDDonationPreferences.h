
@protocol CNDDonationPreferences <NSObject>

@required

+ (CNObservable *)observableWithPreferences:(id <CNDDonationPreferences>)arg1 notificationCenter:(NSNotificationCenter *)arg2 schedulerProvider:(id <CNSchedulerProvider>)arg3;

- (bool)isDonationsEnabled;
- (void)setDonationsEnabled:(bool)arg1;

@end
