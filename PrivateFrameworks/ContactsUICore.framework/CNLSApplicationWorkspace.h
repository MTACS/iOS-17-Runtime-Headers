
@interface CNLSApplicationWorkspace : NSObject <CNLSApplicationWorkspace> {
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)inProcessLaunchServices;
+ (id)launchServices;
+ (id)remoteAdapter;

- (void).cxx_destruct;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)observableForApplicationsChangedWithSchedulerProvider:(id)arg1;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2;
- (void)openSensitiveURLInBackground:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openUserActivity:(id)arg1 inApplication:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)schedulerProvider;
- (void)setSchedulerProvider:(id)arg1;

@end
