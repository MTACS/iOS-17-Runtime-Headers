
@interface RMLog : NSObject

// Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement

+ (id)accountHelper;
+ (id)debounceTimer;
+ (id)device;
+ (id)enrollmentController;
+ (id)jsonUtilities;
+ (id)locations;
+ (id)managedKeychainController;
+ (id)managedTrustStoreController;
+ (id)mcAdapter;
+ (id)mdmHelper;
+ (id)nsdata_rm;
+ (id)nsdictionary_rm;
+ (id)sandbox;
+ (id)sharedLock;
+ (id)timeddispatch;
+ (id)xpcEvent;
+ (id)xpcNotifications;

// Image: /System/Library/PrivateFrameworks/RemoteManagementStore.framework/RemoteManagementStore

+ (id)assetResolverController;
+ (id)configurationCombineApplicator;
+ (id)configurationMultipleApplicator;
+ (id)configurationSingleApplicator;
+ (id)configurationSubscriberClient;
+ (id)configurationSubscriberDelegate;
+ (id)configurationSubscriberEventStream;
+ (id)configurationSubscriberService;
+ (id)profileStore;
+ (id)profilesAdapter;
+ (id)profilesController;
+ (id)statusPublisherDelegate;
+ (id)statusPublisherDescription;
+ (id)storeKeychainController;

@end
