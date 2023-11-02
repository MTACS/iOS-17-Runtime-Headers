
@interface FSModuleHost : NSObject <_EXQueryControllerDelegate> {
    NSArray * _extensions;
    NSDictionary * _extensionsByBundle;
    _EXQueryController * _queryController;
    NSCondition * _queryLock;
    bool  _queryReceivedFirstDelegateCall;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *extensions;
@property (readonly, copy) NSDictionary *extensionsByBundle;
@property (readonly) unsigned long long hash;
@property (retain) _EXQueryController *queryController;
@property (retain) NSCondition *queryLock;
@property bool queryReceivedFirstDelegateCall;
@property (readonly) Class superclass;

+ (id)defaultHost;
+ (id)defaultInstanceUUID;
+ (id)installedExtensionPropertiesSync;
+ (id)installedExtensionsSync;

- (void).cxx_destruct;
- (id)configurationForDefaultInstanceOf:(id)arg1;
- (id)configurationForDefaultInstanceOfBundle:(id)arg1;
- (id)configurationForInstance:(id)arg1 ofBundle:(id)arg2;
- (id)currentExtensions;
- (id)extensionForBundleID:(id)arg1;
- (id)extensions;
- (id)extensionsByBundle;
- (id)queryController;
- (void)queryControllerDidUpdate:(id)arg1 resultDifference:(id)arg2;
- (id)queryLock;
- (bool)queryReceivedFirstDelegateCall;
- (void)setExtensions:(id)arg1;
- (void)setExtensionsLocked:(id)arg1;
- (void)setQueryController:(id)arg1;
- (void)setQueryLock:(id)arg1;
- (void)setQueryReceivedFirstDelegateCall:(bool)arg1;
- (void)setupForAsync;
- (void)setupSyncronously;

@end
