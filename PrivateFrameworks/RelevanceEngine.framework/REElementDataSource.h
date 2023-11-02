
@interface REElementDataSource : NSObject <REElementDataSourceProperties> {
    <REElementDataSourceActivityDelegate> * _activityDelegate;
    bool  _allowsLocationUse;
    <REElementDataSourceDelegate> * _delegate;
    NSString * _logHeader;
    bool  _running;
    unsigned long long  _state;
    bool  _unlockedSinceBoot;
}

@property (nonatomic) bool allowsLocationUse;
@property (nonatomic, readonly) NSDictionary *dataSourceProperties;
@property (nonatomic) <REElementDataSourceDelegate> *delegate;
@property (nonatomic, readonly) NSString *logHeader;
@property (nonatomic, readonly) NSString *name;
@property (getter=isRunning, nonatomic, readonly) bool running;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSArray *supportedSections;
@property (getter=hasUnlockedSinceBoot, nonatomic, readonly) bool unlockedSinceBoot;

+ (id)applicationBundleIdentifier;
+ (id)bundleIdentifier;
+ (id)contentAttributes;
+ (bool)drivenByUserInteraction;
+ (unsigned long long)elementContentMode;
+ (struct { long long x1; long long x2; long long x3; })minimumSupportedSystemVersion;
+ (id)overrideDataSourceImage;
+ (id)overrideLocalizedDataSourceName;
+ (bool)supportsPersistence;
+ (bool)wantsAppPrewarm;
+ (bool)wantsAutomaticFetching;
+ (bool)wantsLocationInUseAsserton;
+ (bool)wantsPrivateQueue;
+ (bool)wantsReloadForFirstDeviceUnlock;
+ (bool)wantsReloadForSignificantTimeChange;

- (void).cxx_destruct;
- (id)activityDelegate;
- (bool)allowsLocationUse;
- (void)beginActivity:(id)arg1;
- (void)beginFetchingData;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)complicationDescriptor;
- (id)dataSourceProperties;
- (id)delegate;
- (void)elementWithIdentifierDidBecomeHidden:(id)arg1;
- (void)elementWithIdentifierWillBecomeVisible:(id)arg1;
- (void)finishActivity:(id)arg1;
- (void)finishFetchingData;
- (void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)getElementsInSection:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)hasUnlockedSinceBoot;
- (id)init;
- (bool)isRunning;
- (void)loadLoggingHeader;
- (id)logHeader;
- (id)name;
- (void)pause;
- (void)resume;
- (void)setActivityDelegate:(id)arg1;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setUnlockedSinceBoot:(bool)arg1;
- (unsigned long long)state;
- (id)supportedSections;

@end
