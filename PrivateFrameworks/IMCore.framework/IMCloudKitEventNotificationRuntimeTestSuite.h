
@interface IMCloudKitEventNotificationRuntimeTestSuite : IMRuntimeTestSuite <IMCloudKitEventHandler> {
    IMCloudKitHookTestSingleton * _cloudKitHooks;
    bool  _shouldTearDown;
}

@property (nonatomic, retain) IMCloudKitHookTestSingleton *cloudKitHooks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool shouldTearDown;
@property (readonly) Class superclass;

+ (void)runTestsIfNeeded;

- (void).cxx_destruct;
- (void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;
- (id)cloudKitHooks;
- (id)init;
- (void)setCloudKitHooks:(id)arg1;
- (void)setShouldTearDown:(bool)arg1;
- (void)setUp;
- (bool)shouldTearDown;
- (void)tearDown;

@end
